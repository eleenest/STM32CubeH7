/**
  ******************************************************************************
  * @file    audio_player/Inc/wavprocess.h
  * @author  MCD Application Team
  * @brief   This file includes WAV Processing layer headers
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics International N.V.
  * All rights reserved.</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice,
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other
  *    contributors to this software may be used to endorse or promote products
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under
  *    this license is void and will automatically terminate your rights under
  *    this license.
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __WAVPROCESS_H_
#define __WAVPROCESS_H_

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup AUDIO_PROCESS
* @{
*/

/** @addtogroup WAV_PROCESS
* @{
*/

/* Includes ------------------------------------------------------------------*/
#include <stdlib.h>

#include "ff.h"
#include "songutilities.h"
#include "audio_conf.h"

#if defined(__WAV_DECODER__) || defined(__WAV_ENCODER__)

/** @defgroup WAV_PROCESS_Exported_Constants
* @{
*/
/* Error Identification structure */
#define VALID_WAVE_FILE                   0     /** @brief Valid Wave File TAG     */
#define INVALID_RIFF_ID                   1     /** @brief Invalid RIFF ID         */
#define INVALID_WAVE_FORMAT               2     /** @brief Invalid Wave Format     */
#define INVALID_FORMAT_CHUNK_ID           3     /** @brief Invalid Format Chunk ID */
#define UNSUPPORTED_FORMAT_TAG            4     /** @brief Valid Wave File TAG */
#define UNSUPPORTED_NUM_CHANNELS          5     /** @brief Valid Wave File TAG */
#define UNSUPPORTED_SAMPLE_RATE           6     /** @brief Valid Wave File TAG */
#define UNSUPPORTED_BITS_PER_SAMPLE       7     /** @brief Valid Wave File TAG */
#define INVALID_DATA_CHUNK_ID             8     /** @brief Valid Wave File TAG */
#define UNSUPPORTED_EXTRA_FORMAT_BYTES    9     /** @brief Valid Wave File TAG */
#define INVALID_FACT_CHUNK_ID            10     /** @brief Valid Wave File TAG */

#if !defined (__GNUC__)
#define LITTLE_ENDIAN                     0
#define BIG_ENDIAN                        1
#endif

/* Audio Parsing Constants */
#define  CHUNK_ID             0x52494646  /* correspond to the letters 'RIFF' */
#define  FILE_FORMAT          0x57415645  /* correspond to the letters 'WAVE' */
#define  FORMAT_ID            0x666D7420  /* correspond to the letters 'fmt ' */
#define  DATA_ID              0x64617461  /* correspond to the letters 'data' */
#define  FACT_ID              0x66616374  /* correspond to the letters 'fact' */
#define  WAVE_FORMAT_PCM      0x01
#define  FORMAT_CHUNK_SIZE    0x10
#define  BITS_PER_SAMPLE_8    8
#define  BITS_PER_SAMPLE_16   16

#define MAX_AUDIO_WAV_HEADER_SIZE    200 /*44*/

#ifndef WAV_PACKET_SZE_PROC
#define WAV_PACKET_SZE_PROC                                (uint32_t)(480*2*2) /* 480 stereo samples of 16-bits*/
#endif

#ifndef WAVIN_PACKET_SZE_PROC
#define WAVIN_PACKET_SZE_PROC                              (uint32_t)(480*2*2) /* 480 samples stereo 16-bit*/
#endif

/**
* @}
*/

/** @defgroup WAV_PROCESS_Exported_Types
* @{
*/
/* Audio file information structure */
typedef struct
{
  uint32_t  SampleRate;        /* Audio sampling frequency */
  uint32_t  NumChannels;       /* Number of channels: 1:Mono or 2:Stereo */
  uint32_t  BitsPerSample;     /* Number of bits per sample (16, 24 or 32) */
  uint32_t  AudioLength;       /* Total length of useful audio data (payload) */
  uint32_t  AudioStartAddr;     /* Relative start address of audio payload */
  uint32_t  RIFFchunksize;     /* The file header chunk size */
  uint16_t  FormatTag;         /* Audio file format: PCM = 1 */
  uint32_t  ByteRate;          /* Number of bytes per second  (sample rate * block align)  */
  uint16_t  BlockAlign;        /* channels * bits/sample / 8 */
  uint32_t  DataSize;          /* Audio data size */
}WAVE_FormatTypeDef;

/*for recorder*/
typedef struct {
  uint32_t ChunkID;       /* 0 */
  uint32_t FileSize;      /* 4 */
  uint32_t FileFormat;    /* 8 */
  uint32_t SubChunk1ID;   /* 12 */
  uint32_t SubChunk1Size; /* 16*/
  uint16_t AudioFormat;   /* 20 */
  uint16_t NbrChannels;   /* 22 */
  uint32_t SampleRate;    /* 24 */

  uint32_t ByteRate;      /* 28 */
  uint16_t BlockAlign;    /* 32 */
  uint16_t BitPerSample;  /* 34 */
  uint32_t SubChunk2ID;   /* 36 */
  uint32_t SubChunk2Size; /* 40 */
}WAVE_RecFormatTypeDef;

/**
* @}
*/

/** @defgroup WAV_PROCESS_Exported_Functions
* @{
*/
#ifdef __WAV_DECODER__
  uint32_t WavProcess_DecInit(uint8_t* pHeader,
                              fnReadCallback_TypeDef* pReadCallback,
                              fnSetPositionCallback_TypeDef* pSetPosCallback,
                              fnGetSizeCallback_TypeDef pGetSizeCallback,
                              void *pUserData);
  uint32_t WavProcess_DecodeData(__IO int16_t* OutPutBuffer,uint32_t NbSamples,void * none);

  uint32_t WavProcess_DecSetProgressTime(uint32_t NewTime);
  uint32_t WavProcess_DecGetStreamLenght(uint32_t fLength);
  uint32_t WavProcess_DecGetElapsedTime(uint32_t CurPos);
  uint32_t WavProcess_DecGetSamplingRate(void);

  uint32_t WavProcess_GetNbChannels(void);
  uint32_t WavProcess_GetNbBits(void);
  uint32_t WavProcess_GetNbSamplesFrame(void);

  uint32_t WavProcess_MonoToStereo(int16_t* BIn, int16_t* BOut, uint32_t Size);
#endif /* __WAV_DECODER__ */

#ifdef __WAV_ENCODER__
  uint32_t WavProcess_EncInit(uint32_t Freq, uint8_t* pHeader);
  uint32_t WavProcess_EncDeInit(void);
  uint32_t WavProcess_EncodeData(int8_t *pBufIn, int8_t *pBufOut, uint32_t* nEnc, void* pOpt);

  uint32_t WavProcess_EncGetSampleRate(void);
  uint32_t WavProcess_EncGetStreamLength(void);
  uint32_t WavProcess_EncGetElapsedTime(void);

  uint32_t WavProcess_HeaderUpdate(uint8_t* pHeader, WAVE_FormatTypeDef* pWaveFormatStruct, uint32_t* fptr);
#endif /* __WAV_ENCODER__ */

#endif /* __WAV_DECODER__ || __WAV_ENCODER__ */

/**
* @}
*/

/**
* @}
*/

/**
* @}
*/

#ifdef __cplusplus
}
#endif

#endif /* __WAVPROCESS_H_ */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
