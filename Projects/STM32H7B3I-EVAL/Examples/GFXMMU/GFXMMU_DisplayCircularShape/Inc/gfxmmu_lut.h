/**
  ******************************************************************************
  * @file    GFXMMU/GFXMMU_DisplayCircularShape/Inc/gfxmmu_lut.h 
  * @author  MCD Application Team
  * @brief   This file contains GFXMMU Configuration Table.   
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */ 

#define GFXMMU_FB_SIZE 730848
#define GFXMMU_LUT_FIRST 0
#define GFXMMU_LUT_LAST 479
#define GFXMMU_LUT_SIZE 480

uint32_t gfxmmu_lut_config_argb8888[2*GFXMMU_LUT_SIZE] = 
{
  0x00646401, //GFXMMU_LUT0L
  0x003FF9C0, //GFXMMU_LUT0H
  0x00695E01, //GFXMMU_LUT1L
  0x003FFA30, //GFXMMU_LUT1H
  0x006B5C01, //GFXMMU_LUT2L
  0x003FFB10, //GFXMMU_LUT2H
  0x006D5A01, //GFXMMU_LUT3L
  0x003FFC30, //GFXMMU_LUT3H
  0x006E5901, //GFXMMU_LUT4L
  0x003FFD80, //GFXMMU_LUT4H
  0x00705701, //GFXMMU_LUT5L
  0x003FFF00, //GFXMMU_LUT5H
  0x00715601, //GFXMMU_LUT6L
  0x000000B0, //GFXMMU_LUT6H
  0x00725501, //GFXMMU_LUT7L
  0x00000280, //GFXMMU_LUT7H
  0x00735401, //GFXMMU_LUT8L
  0x00000470, //GFXMMU_LUT8H
  0x00745301, //GFXMMU_LUT9L
  0x00000680, //GFXMMU_LUT9H
  0x00755201, //GFXMMU_LUT10L
  0x000008B0, //GFXMMU_LUT10H
  0x00755201, //GFXMMU_LUT11L
  0x00000AF0, //GFXMMU_LUT11H
  0x00765101, //GFXMMU_LUT12L
  0x00000D40, //GFXMMU_LUT12H
  0x00775001, //GFXMMU_LUT13L
  0x00000FB0, //GFXMMU_LUT13H
  0x00784F01, //GFXMMU_LUT14L
  0x00001240, //GFXMMU_LUT14H
  0x00784F01, //GFXMMU_LUT15L
  0x000014E0, //GFXMMU_LUT15H
  0x00794E01, //GFXMMU_LUT16L
  0x00001790, //GFXMMU_LUT16H
  0x007A4D01, //GFXMMU_LUT17L
  0x00001A60, //GFXMMU_LUT17H
  0x007A4D01, //GFXMMU_LUT18L
  0x00001D40, //GFXMMU_LUT18H
  0x007B4C01, //GFXMMU_LUT19L
  0x00002030, //GFXMMU_LUT19H
  0x007B4C01, //GFXMMU_LUT20L
  0x00002330, //GFXMMU_LUT20H
  0x007C4B01, //GFXMMU_LUT21L
  0x00002640, //GFXMMU_LUT21H
  0x007D4A01, //GFXMMU_LUT22L
  0x00002970, //GFXMMU_LUT22H
  0x007D4A01, //GFXMMU_LUT23L
  0x00002CB0, //GFXMMU_LUT23H
  0x007E4901, //GFXMMU_LUT24L
  0x00003000, //GFXMMU_LUT24H
  0x007E4901, //GFXMMU_LUT25L
  0x00003360, //GFXMMU_LUT25H
  0x007F4801, //GFXMMU_LUT26L
  0x000036D0, //GFXMMU_LUT26H
  0x007F4801, //GFXMMU_LUT27L
  0x00003A50, //GFXMMU_LUT27H
  0x00804701, //GFXMMU_LUT28L
  0x00003DE0, //GFXMMU_LUT28H
  0x00804701, //GFXMMU_LUT29L
  0x00004180, //GFXMMU_LUT29H
  0x00814601, //GFXMMU_LUT30L
  0x00004530, //GFXMMU_LUT30H
  0x00814601, //GFXMMU_LUT31L
  0x000048F0, //GFXMMU_LUT31H
  0x00814601, //GFXMMU_LUT32L
  0x00004CB0, //GFXMMU_LUT32H
  0x00824501, //GFXMMU_LUT33L
  0x00005080, //GFXMMU_LUT33H
  0x00824501, //GFXMMU_LUT34L
  0x00005460, //GFXMMU_LUT34H
  0x00834401, //GFXMMU_LUT35L
  0x00005850, //GFXMMU_LUT35H
  0x00834401, //GFXMMU_LUT36L
  0x00005C50, //GFXMMU_LUT36H
  0x00844301, //GFXMMU_LUT37L
  0x00006060, //GFXMMU_LUT37H
  0x00844301, //GFXMMU_LUT38L
  0x00006480, //GFXMMU_LUT38H
  0x00844301, //GFXMMU_LUT39L
  0x000068A0, //GFXMMU_LUT39H
  0x00854201, //GFXMMU_LUT40L
  0x00006CD0, //GFXMMU_LUT40H
  0x00854201, //GFXMMU_LUT41L
  0x00007110, //GFXMMU_LUT41H
  0x00854201, //GFXMMU_LUT42L
  0x00007550, //GFXMMU_LUT42H
  0x00864101, //GFXMMU_LUT43L
  0x000079A0, //GFXMMU_LUT43H
  0x00864101, //GFXMMU_LUT44L
  0x00007E00, //GFXMMU_LUT44H
  0x00864101, //GFXMMU_LUT45L
  0x00008260, //GFXMMU_LUT45H
  0x00874001, //GFXMMU_LUT46L
  0x000086D0, //GFXMMU_LUT46H
  0x00874001, //GFXMMU_LUT47L
  0x00008B50, //GFXMMU_LUT47H
  0x00884001, //GFXMMU_LUT48L
  0x00008FD0, //GFXMMU_LUT48H
  0x00883F01, //GFXMMU_LUT49L
  0x00009470, //GFXMMU_LUT49H
  0x00883F01, //GFXMMU_LUT50L
  0x00009910, //GFXMMU_LUT50H
  0x00883F01, //GFXMMU_LUT51L
  0x00009DB0, //GFXMMU_LUT51H
  0x00893E01, //GFXMMU_LUT52L
  0x0000A260, //GFXMMU_LUT52H
  0x00893E01, //GFXMMU_LUT53L
  0x0000A720, //GFXMMU_LUT53H
  0x00893E01, //GFXMMU_LUT54L
  0x0000ABE0, //GFXMMU_LUT54H
  0x008A3D01, //GFXMMU_LUT55L
  0x0000B0B0, //GFXMMU_LUT55H
  0x008A3D01, //GFXMMU_LUT56L
  0x0000B590, //GFXMMU_LUT56H
  0x008A3D01, //GFXMMU_LUT57L
  0x0000BA70, //GFXMMU_LUT57H
  0x008B3C01, //GFXMMU_LUT58L
  0x0000BF60, //GFXMMU_LUT58H
  0x008B3C01, //GFXMMU_LUT59L
  0x0000C460, //GFXMMU_LUT59H
  0x008B3C01, //GFXMMU_LUT60L
  0x0000C960, //GFXMMU_LUT60H
  0x008B3C01, //GFXMMU_LUT61L
  0x0000CE60, //GFXMMU_LUT61H
  0x008C3B01, //GFXMMU_LUT62L
  0x0000D370, //GFXMMU_LUT62H
  0x008C3B01, //GFXMMU_LUT63L
  0x0000D890, //GFXMMU_LUT63H
  0x008C3B01, //GFXMMU_LUT64L
  0x0000DDB0, //GFXMMU_LUT64H
  0x008D3A01, //GFXMMU_LUT65L
  0x0000E2E0, //GFXMMU_LUT65H
  0x008D3A01, //GFXMMU_LUT66L
  0x0000E820, //GFXMMU_LUT66H
  0x008D3A01, //GFXMMU_LUT67L
  0x0000ED60, //GFXMMU_LUT67H
  0x008D3A01, //GFXMMU_LUT68L
  0x0000F2A0, //GFXMMU_LUT68H
  0x008E3901, //GFXMMU_LUT69L
  0x0000F7F0, //GFXMMU_LUT69H
  0x008E3901, //GFXMMU_LUT70L
  0x0000FD50, //GFXMMU_LUT70H
  0x008E3901, //GFXMMU_LUT71L
  0x000102B0, //GFXMMU_LUT71H
  0x008E3901, //GFXMMU_LUT72L
  0x00010810, //GFXMMU_LUT72H
  0x008F3801, //GFXMMU_LUT73L
  0x00010D80, //GFXMMU_LUT73H
  0x008F3801, //GFXMMU_LUT74L
  0x00011300, //GFXMMU_LUT74H
  0x008F3801, //GFXMMU_LUT75L
  0x00011880, //GFXMMU_LUT75H
  0x008F3801, //GFXMMU_LUT76L
  0x00011E00, //GFXMMU_LUT76H
  0x00903701, //GFXMMU_LUT77L
  0x00012390, //GFXMMU_LUT77H
  0x00903701, //GFXMMU_LUT78L
  0x00012930, //GFXMMU_LUT78H
  0x00903701, //GFXMMU_LUT79L
  0x00012ED0, //GFXMMU_LUT79H
  0x00903701, //GFXMMU_LUT80L
  0x00013470, //GFXMMU_LUT80H
  0x00903701, //GFXMMU_LUT81L
  0x00013A10, //GFXMMU_LUT81H
  0x00913601, //GFXMMU_LUT82L
  0x00013FC0, //GFXMMU_LUT82H
  0x00913601, //GFXMMU_LUT83L
  0x00014580, //GFXMMU_LUT83H
  0x00913601, //GFXMMU_LUT84L
  0x00014B40, //GFXMMU_LUT84H
  0x00913601, //GFXMMU_LUT85L
  0x00015100, //GFXMMU_LUT85H
  0x00923501, //GFXMMU_LUT86L
  0x000156D0, //GFXMMU_LUT86H
  0x00923501, //GFXMMU_LUT87L
  0x00015CB0, //GFXMMU_LUT87H
  0x00923501, //GFXMMU_LUT88L
  0x00016290, //GFXMMU_LUT88H
  0x00923501, //GFXMMU_LUT89L
  0x00016870, //GFXMMU_LUT89H
  0x00923501, //GFXMMU_LUT90L
  0x00016E50, //GFXMMU_LUT90H
  0x00933401, //GFXMMU_LUT91L
  0x00017440, //GFXMMU_LUT91H
  0x00933401, //GFXMMU_LUT92L
  0x00017A40, //GFXMMU_LUT92H
  0x00933401, //GFXMMU_LUT93L
  0x00018040, //GFXMMU_LUT93H
  0x00933401, //GFXMMU_LUT94L
  0x00018640, //GFXMMU_LUT94H
  0x00933401, //GFXMMU_LUT95L
  0x00018C40, //GFXMMU_LUT95H
  0x00943401, //GFXMMU_LUT96L
  0x00019240, //GFXMMU_LUT96H
  0x00943301, //GFXMMU_LUT97L
  0x00019860, //GFXMMU_LUT97H
  0x00943301, //GFXMMU_LUT98L
  0x00019E80, //GFXMMU_LUT98H
  0x00943301, //GFXMMU_LUT99L
  0x0001A4A0, //GFXMMU_LUT99H
  0x00943301, //GFXMMU_LUT100L
  0x0001AAC0, //GFXMMU_LUT100H
  0x00943301, //GFXMMU_LUT101L
  0x0001B0E0, //GFXMMU_LUT101H
  0x00953201, //GFXMMU_LUT102L
  0x0001B710, //GFXMMU_LUT102H
  0x00953201, //GFXMMU_LUT103L
  0x0001BD50, //GFXMMU_LUT103H
  0x00953201, //GFXMMU_LUT104L
  0x0001C390, //GFXMMU_LUT104H
  0x00953201, //GFXMMU_LUT105L
  0x0001C9D0, //GFXMMU_LUT105H
  0x00953201, //GFXMMU_LUT106L
  0x0001D010, //GFXMMU_LUT106H
  0x00953201, //GFXMMU_LUT107L
  0x0001D650, //GFXMMU_LUT107H
  0x00963101, //GFXMMU_LUT108L
  0x0001DCA0, //GFXMMU_LUT108H
  0x00963101, //GFXMMU_LUT109L
  0x0001E300, //GFXMMU_LUT109H
  0x00963101, //GFXMMU_LUT110L
  0x0001E960, //GFXMMU_LUT110H
  0x00963101, //GFXMMU_LUT111L
  0x0001EFC0, //GFXMMU_LUT111H
  0x00963101, //GFXMMU_LUT112L
  0x0001F620, //GFXMMU_LUT112H
  0x00963101, //GFXMMU_LUT113L
  0x0001FC80, //GFXMMU_LUT113H
  0x00973001, //GFXMMU_LUT114L
  0x000202F0, //GFXMMU_LUT114H
  0x00973001, //GFXMMU_LUT115L
  0x00020970, //GFXMMU_LUT115H
  0x00973001, //GFXMMU_LUT116L
  0x00020FF0, //GFXMMU_LUT116H
  0x00973001, //GFXMMU_LUT117L
  0x00021670, //GFXMMU_LUT117H
  0x00973001, //GFXMMU_LUT118L
  0x00021CF0, //GFXMMU_LUT118H
  0x00973001, //GFXMMU_LUT119L
  0x00022370, //GFXMMU_LUT119H
  0x00973001, //GFXMMU_LUT120L
  0x000229F0, //GFXMMU_LUT120H
  0x00982F01, //GFXMMU_LUT121L
  0x00023080, //GFXMMU_LUT121H
  0x00982F01, //GFXMMU_LUT122L
  0x00023720, //GFXMMU_LUT122H
  0x00982F01, //GFXMMU_LUT123L
  0x00023DC0, //GFXMMU_LUT123H
  0x00982F01, //GFXMMU_LUT124L
  0x00024460, //GFXMMU_LUT124H
  0x00982F01, //GFXMMU_LUT125L
  0x00024B00, //GFXMMU_LUT125H
  0x00982F01, //GFXMMU_LUT126L
  0x000251A0, //GFXMMU_LUT126H
  0x00982F01, //GFXMMU_LUT127L
  0x00025840, //GFXMMU_LUT127H
  0x00992E01, //GFXMMU_LUT128L
  0x00025EF0, //GFXMMU_LUT128H
  0x00992E01, //GFXMMU_LUT129L
  0x000265B0, //GFXMMU_LUT129H
  0x00992E01, //GFXMMU_LUT130L
  0x00026C70, //GFXMMU_LUT130H
  0x00992E01, //GFXMMU_LUT131L
  0x00027330, //GFXMMU_LUT131H
  0x00992E01, //GFXMMU_LUT132L
  0x000279F0, //GFXMMU_LUT132H
  0x00992E01, //GFXMMU_LUT133L
  0x000280B0, //GFXMMU_LUT133H
  0x00992E01, //GFXMMU_LUT134L
  0x00028770, //GFXMMU_LUT134H
  0x00992E01, //GFXMMU_LUT135L
  0x00028E30, //GFXMMU_LUT135H
  0x009A2D01, //GFXMMU_LUT136L
  0x00029500, //GFXMMU_LUT136H
  0x009A2D01, //GFXMMU_LUT137L
  0x00029BE0, //GFXMMU_LUT137H
  0x009A2D01, //GFXMMU_LUT138L
  0x0002A2C0, //GFXMMU_LUT138H
  0x009A2D01, //GFXMMU_LUT139L
  0x0002A9A0, //GFXMMU_LUT139H
  0x009A2D01, //GFXMMU_LUT140L
  0x0002B080, //GFXMMU_LUT140H
  0x009A2D01, //GFXMMU_LUT141L
  0x0002B760, //GFXMMU_LUT141H
  0x009A2D01, //GFXMMU_LUT142L
  0x0002BE40, //GFXMMU_LUT142H
  0x009A2D01, //GFXMMU_LUT143L
  0x0002C520, //GFXMMU_LUT143H
  0x009A2D01, //GFXMMU_LUT144L
  0x0002CC00, //GFXMMU_LUT144H
  0x009B2C01, //GFXMMU_LUT145L
  0x0002D2F0, //GFXMMU_LUT145H
  0x009B2C01, //GFXMMU_LUT146L
  0x0002D9F0, //GFXMMU_LUT146H
  0x009B2C01, //GFXMMU_LUT147L
  0x0002E0F0, //GFXMMU_LUT147H
  0x009B2C01, //GFXMMU_LUT148L
  0x0002E7F0, //GFXMMU_LUT148H
  0x009B2C01, //GFXMMU_LUT149L
  0x0002EEF0, //GFXMMU_LUT149H
  0x009B2C01, //GFXMMU_LUT150L
  0x0002F5F0, //GFXMMU_LUT150H
  0x009B2C01, //GFXMMU_LUT151L
  0x0002FCF0, //GFXMMU_LUT151H
  0x009B2C01, //GFXMMU_LUT152L
  0x000303F0, //GFXMMU_LUT152H
  0x009B2C01, //GFXMMU_LUT153L
  0x00030AF0, //GFXMMU_LUT153H
  0x009C2B01, //GFXMMU_LUT154L
  0x00031200, //GFXMMU_LUT154H
  0x009C2B01, //GFXMMU_LUT155L
  0x00031920, //GFXMMU_LUT155H
  0x009C2B01, //GFXMMU_LUT156L
  0x00032040, //GFXMMU_LUT156H
  0x009C2B01, //GFXMMU_LUT157L
  0x00032760, //GFXMMU_LUT157H
  0x009C2B01, //GFXMMU_LUT158L
  0x00032E80, //GFXMMU_LUT158H
  0x009C2B01, //GFXMMU_LUT159L
  0x000335A0, //GFXMMU_LUT159H
  0x009C2B01, //GFXMMU_LUT160L
  0x00033CC0, //GFXMMU_LUT160H
  0x009C2B01, //GFXMMU_LUT161L
  0x000343E0, //GFXMMU_LUT161H
  0x009C2B01, //GFXMMU_LUT162L
  0x00034B00, //GFXMMU_LUT162H
  0x009C2B01, //GFXMMU_LUT163L
  0x00035220, //GFXMMU_LUT163H
  0x009C2B01, //GFXMMU_LUT164L
  0x00035940, //GFXMMU_LUT164H
  0x009C2B01, //GFXMMU_LUT165L
  0x00036060, //GFXMMU_LUT165H
  0x009D2A01, //GFXMMU_LUT166L
  0x00036790, //GFXMMU_LUT166H
  0x009D2A01, //GFXMMU_LUT167L
  0x00036ED0, //GFXMMU_LUT167H
  0x009D2A01, //GFXMMU_LUT168L
  0x00037610, //GFXMMU_LUT168H
  0x009D2A01, //GFXMMU_LUT169L
  0x00037D50, //GFXMMU_LUT169H
  0x009D2A01, //GFXMMU_LUT170L
  0x00038490, //GFXMMU_LUT170H
  0x009D2A01, //GFXMMU_LUT171L
  0x00038BD0, //GFXMMU_LUT171H
  0x009D2A01, //GFXMMU_LUT172L
  0x00039310, //GFXMMU_LUT172H
  0x009D2A01, //GFXMMU_LUT173L
  0x00039A50, //GFXMMU_LUT173H
  0x009D2A01, //GFXMMU_LUT174L
  0x0003A190, //GFXMMU_LUT174H
  0x009D2A01, //GFXMMU_LUT175L
  0x0003A8D0, //GFXMMU_LUT175H
  0x009D2A01, //GFXMMU_LUT176L
  0x0003B010, //GFXMMU_LUT176H
  0x009D2A01, //GFXMMU_LUT177L
  0x0003B750, //GFXMMU_LUT177H
  0x009D2A01, //GFXMMU_LUT178L
  0x0003BE90, //GFXMMU_LUT178H
  0x009E2901, //GFXMMU_LUT179L
  0x0003C5E0, //GFXMMU_LUT179H
  0x009E2901, //GFXMMU_LUT180L
  0x0003CD40, //GFXMMU_LUT180H
  0x009E2901, //GFXMMU_LUT181L
  0x0003D4A0, //GFXMMU_LUT181H
  0x009E2901, //GFXMMU_LUT182L
  0x0003DC00, //GFXMMU_LUT182H
  0x009E2901, //GFXMMU_LUT183L
  0x0003E360, //GFXMMU_LUT183H
  0x009E2901, //GFXMMU_LUT184L
  0x0003EAC0, //GFXMMU_LUT184H
  0x009E2901, //GFXMMU_LUT185L
  0x0003F220, //GFXMMU_LUT185H
  0x009E2901, //GFXMMU_LUT186L
  0x0003F980, //GFXMMU_LUT186H
  0x009E2901, //GFXMMU_LUT187L
  0x000400E0, //GFXMMU_LUT187H
  0x009E2901, //GFXMMU_LUT188L
  0x00040840, //GFXMMU_LUT188H
  0x009E2901, //GFXMMU_LUT189L
  0x00040FA0, //GFXMMU_LUT189H
  0x009E2901, //GFXMMU_LUT190L
  0x00041700, //GFXMMU_LUT190H
  0x009E2901, //GFXMMU_LUT191L
  0x00041E60, //GFXMMU_LUT191H
  0x009E2901, //GFXMMU_LUT192L
  0x000425C0, //GFXMMU_LUT192H
  0x009E2901, //GFXMMU_LUT193L
  0x00042D20, //GFXMMU_LUT193H
  0x009E2901, //GFXMMU_LUT194L
  0x00043480, //GFXMMU_LUT194H
  0x009E2901, //GFXMMU_LUT195L
  0x00043BE0, //GFXMMU_LUT195H
  0x009E2901, //GFXMMU_LUT196L
  0x00044340, //GFXMMU_LUT196H
  0x009F2801, //GFXMMU_LUT197L
  0x00044AB0, //GFXMMU_LUT197H
  0x009F2801, //GFXMMU_LUT198L
  0x00045230, //GFXMMU_LUT198H
  0x009F2801, //GFXMMU_LUT199L
  0x000459B0, //GFXMMU_LUT199H
  0x009F2801, //GFXMMU_LUT200L
  0x00046130, //GFXMMU_LUT200H
  0x009F2801, //GFXMMU_LUT201L
  0x000468B0, //GFXMMU_LUT201H
  0x009F2801, //GFXMMU_LUT202L
  0x00047030, //GFXMMU_LUT202H
  0x009F2801, //GFXMMU_LUT203L
  0x000477B0, //GFXMMU_LUT203H
  0x009F2801, //GFXMMU_LUT204L
  0x00047F30, //GFXMMU_LUT204H
  0x009F2801, //GFXMMU_LUT205L
  0x000486B0, //GFXMMU_LUT205H
  0x009F2801, //GFXMMU_LUT206L
  0x00048E30, //GFXMMU_LUT206H
  0x009F2801, //GFXMMU_LUT207L
  0x000495B0, //GFXMMU_LUT207H
  0x009F2801, //GFXMMU_LUT208L
  0x00049D30, //GFXMMU_LUT208H
  0x009F2801, //GFXMMU_LUT209L
  0x0004A4B0, //GFXMMU_LUT209H
  0x009F2801, //GFXMMU_LUT210L
  0x0004AC30, //GFXMMU_LUT210H
  0x009F2801, //GFXMMU_LUT211L
  0x0004B3B0, //GFXMMU_LUT211H
  0x009F2801, //GFXMMU_LUT212L
  0x0004BB30, //GFXMMU_LUT212H
  0x009F2801, //GFXMMU_LUT213L
  0x0004C2B0, //GFXMMU_LUT213H
  0x009F2801, //GFXMMU_LUT214L
  0x0004CA30, //GFXMMU_LUT214H
  0x009F2801, //GFXMMU_LUT215L
  0x0004D1B0, //GFXMMU_LUT215H
  0x009F2801, //GFXMMU_LUT216L
  0x0004D930, //GFXMMU_LUT216H
  0x009F2801, //GFXMMU_LUT217L
  0x0004E0B0, //GFXMMU_LUT217H
  0x009F2801, //GFXMMU_LUT218L
  0x0004E830, //GFXMMU_LUT218H
  0x009F2801, //GFXMMU_LUT219L
  0x0004EFB0, //GFXMMU_LUT219H
  0x009F2801, //GFXMMU_LUT220L
  0x0004F730, //GFXMMU_LUT220H
  0x009F2801, //GFXMMU_LUT221L
  0x0004FEB0, //GFXMMU_LUT221H
  0x009F2801, //GFXMMU_LUT222L
  0x00050630, //GFXMMU_LUT222H
  0x009F2801, //GFXMMU_LUT223L
  0x00050DB0, //GFXMMU_LUT223H
  0x009F2801, //GFXMMU_LUT224L
  0x00051530, //GFXMMU_LUT224H
  0x009F2801, //GFXMMU_LUT225L
  0x00051CB0, //GFXMMU_LUT225H
  0x009F2801, //GFXMMU_LUT226L
  0x00052430, //GFXMMU_LUT226H
  0x009F2801, //GFXMMU_LUT227L
  0x00052BB0, //GFXMMU_LUT227H
  0x009F2801, //GFXMMU_LUT228L
  0x00053330, //GFXMMU_LUT228H
  0x009F2801, //GFXMMU_LUT229L
  0x00053AB0, //GFXMMU_LUT229H
  0x009F2801, //GFXMMU_LUT230L
  0x00054230, //GFXMMU_LUT230H
  0x009F2801, //GFXMMU_LUT231L
  0x000549B0, //GFXMMU_LUT231H
  0x009F2801, //GFXMMU_LUT232L
  0x00055130, //GFXMMU_LUT232H
  0x009F2801, //GFXMMU_LUT233L
  0x000558B0, //GFXMMU_LUT233H
  0x009F2801, //GFXMMU_LUT234L
  0x00056030, //GFXMMU_LUT234H
  0x009F2801, //GFXMMU_LUT235L
  0x000567B0, //GFXMMU_LUT235H
  0x009F2801, //GFXMMU_LUT236L
  0x00056F30, //GFXMMU_LUT236H
  0x009F2801, //GFXMMU_LUT237L
  0x000576B0, //GFXMMU_LUT237H
  0x009F2801, //GFXMMU_LUT238L
  0x00057E30, //GFXMMU_LUT238H
  0x009F2801, //GFXMMU_LUT239L
  0x000585B0, //GFXMMU_LUT239H
  0x009F2801, //GFXMMU_LUT240L
  0x00058D30, //GFXMMU_LUT240H
  0x009F2801, //GFXMMU_LUT241L
  0x000594B0, //GFXMMU_LUT241H
  0x009F2801, //GFXMMU_LUT242L
  0x00059C30, //GFXMMU_LUT242H
  0x009F2801, //GFXMMU_LUT243L
  0x0005A3B0, //GFXMMU_LUT243H
  0x009F2801, //GFXMMU_LUT244L
  0x0005AB30, //GFXMMU_LUT244H
  0x009F2801, //GFXMMU_LUT245L
  0x0005B2B0, //GFXMMU_LUT245H
  0x009F2801, //GFXMMU_LUT246L
  0x0005BA30, //GFXMMU_LUT246H
  0x009F2801, //GFXMMU_LUT247L
  0x0005C1B0, //GFXMMU_LUT247H
  0x009F2801, //GFXMMU_LUT248L
  0x0005C930, //GFXMMU_LUT248H
  0x009F2801, //GFXMMU_LUT249L
  0x0005D0B0, //GFXMMU_LUT249H
  0x009F2801, //GFXMMU_LUT250L
  0x0005D830, //GFXMMU_LUT250H
  0x009F2801, //GFXMMU_LUT251L
  0x0005DFB0, //GFXMMU_LUT251H
  0x009F2801, //GFXMMU_LUT252L
  0x0005E730, //GFXMMU_LUT252H
  0x009F2801, //GFXMMU_LUT253L
  0x0005EEB0, //GFXMMU_LUT253H
  0x009F2801, //GFXMMU_LUT254L
  0x0005F630, //GFXMMU_LUT254H
  0x009F2801, //GFXMMU_LUT255L
  0x0005FDB0, //GFXMMU_LUT255H
  0x009F2801, //GFXMMU_LUT256L
  0x00060530, //GFXMMU_LUT256H
  0x009F2801, //GFXMMU_LUT257L
  0x00060CB0, //GFXMMU_LUT257H
  0x009F2801, //GFXMMU_LUT258L
  0x00061430, //GFXMMU_LUT258H
  0x009F2801, //GFXMMU_LUT259L
  0x00061BB0, //GFXMMU_LUT259H
  0x009F2801, //GFXMMU_LUT260L
  0x00062330, //GFXMMU_LUT260H
  0x009F2801, //GFXMMU_LUT261L
  0x00062AB0, //GFXMMU_LUT261H
  0x009F2801, //GFXMMU_LUT262L
  0x00063230, //GFXMMU_LUT262H
  0x009F2801, //GFXMMU_LUT263L
  0x000639B0, //GFXMMU_LUT263H
  0x009F2801, //GFXMMU_LUT264L
  0x00064130, //GFXMMU_LUT264H
  0x009F2801, //GFXMMU_LUT265L
  0x000648B0, //GFXMMU_LUT265H
  0x009F2801, //GFXMMU_LUT266L
  0x00065030, //GFXMMU_LUT266H
  0x009F2801, //GFXMMU_LUT267L
  0x000657B0, //GFXMMU_LUT267H
  0x009F2801, //GFXMMU_LUT268L
  0x00065F30, //GFXMMU_LUT268H
  0x009F2801, //GFXMMU_LUT269L
  0x000666B0, //GFXMMU_LUT269H
  0x009F2801, //GFXMMU_LUT270L
  0x00066E30, //GFXMMU_LUT270H
  0x009F2801, //GFXMMU_LUT271L
  0x000675B0, //GFXMMU_LUT271H
  0x009F2801, //GFXMMU_LUT272L
  0x00067D30, //GFXMMU_LUT272H
  0x009F2801, //GFXMMU_LUT273L
  0x000684B0, //GFXMMU_LUT273H
  0x009F2801, //GFXMMU_LUT274L
  0x00068C30, //GFXMMU_LUT274H
  0x009F2801, //GFXMMU_LUT275L
  0x000693B0, //GFXMMU_LUT275H
  0x009F2801, //GFXMMU_LUT276L
  0x00069B30, //GFXMMU_LUT276H
  0x009F2801, //GFXMMU_LUT277L
  0x0006A2B0, //GFXMMU_LUT277H
  0x009F2801, //GFXMMU_LUT278L
  0x0006AA30, //GFXMMU_LUT278H
  0x009F2801, //GFXMMU_LUT279L
  0x0006B1B0, //GFXMMU_LUT279H
  0x009F2801, //GFXMMU_LUT280L
  0x0006B930, //GFXMMU_LUT280H
  0x009F2801, //GFXMMU_LUT281L
  0x0006C0B0, //GFXMMU_LUT281H
  0x009F2801, //GFXMMU_LUT282L
  0x0006C830, //GFXMMU_LUT282H
  0x009F2801, //GFXMMU_LUT283L
  0x0006CFB0, //GFXMMU_LUT283H
  0x009E2901, //GFXMMU_LUT284L
  0x0006D720, //GFXMMU_LUT284H
  0x009E2901, //GFXMMU_LUT285L
  0x0006DE80, //GFXMMU_LUT285H
  0x009E2901, //GFXMMU_LUT286L
  0x0006E5E0, //GFXMMU_LUT286H
  0x009E2901, //GFXMMU_LUT287L
  0x0006ED40, //GFXMMU_LUT287H
  0x009E2901, //GFXMMU_LUT288L
  0x0006F4A0, //GFXMMU_LUT288H
  0x009E2901, //GFXMMU_LUT289L
  0x0006FC00, //GFXMMU_LUT289H
  0x009E2901, //GFXMMU_LUT290L
  0x00070360, //GFXMMU_LUT290H
  0x009E2901, //GFXMMU_LUT291L
  0x00070AC0, //GFXMMU_LUT291H
  0x009E2901, //GFXMMU_LUT292L
  0x00071220, //GFXMMU_LUT292H
  0x009E2901, //GFXMMU_LUT293L
  0x00071980, //GFXMMU_LUT293H
  0x009E2901, //GFXMMU_LUT294L
  0x000720E0, //GFXMMU_LUT294H
  0x009E2901, //GFXMMU_LUT295L
  0x00072840, //GFXMMU_LUT295H
  0x009E2901, //GFXMMU_LUT296L
  0x00072FA0, //GFXMMU_LUT296H
  0x009E2901, //GFXMMU_LUT297L
  0x00073700, //GFXMMU_LUT297H
  0x009E2901, //GFXMMU_LUT298L
  0x00073E60, //GFXMMU_LUT298H
  0x009E2901, //GFXMMU_LUT299L
  0x000745C0, //GFXMMU_LUT299H
  0x009E2901, //GFXMMU_LUT300L
  0x00074D20, //GFXMMU_LUT300H
  0x009E2901, //GFXMMU_LUT301L
  0x00075480, //GFXMMU_LUT301H
  0x009D2A01, //GFXMMU_LUT302L
  0x00075BD0, //GFXMMU_LUT302H
  0x009D2A01, //GFXMMU_LUT303L
  0x00076310, //GFXMMU_LUT303H
  0x009D2A01, //GFXMMU_LUT304L
  0x00076A50, //GFXMMU_LUT304H
  0x009D2A01, //GFXMMU_LUT305L
  0x00077190, //GFXMMU_LUT305H
  0x009D2A01, //GFXMMU_LUT306L
  0x000778D0, //GFXMMU_LUT306H
  0x009D2A01, //GFXMMU_LUT307L
  0x00078010, //GFXMMU_LUT307H
  0x009D2A01, //GFXMMU_LUT308L
  0x00078750, //GFXMMU_LUT308H
  0x009D2A01, //GFXMMU_LUT309L
  0x00078E90, //GFXMMU_LUT309H
  0x009D2A01, //GFXMMU_LUT310L
  0x000795D0, //GFXMMU_LUT310H
  0x009D2A01, //GFXMMU_LUT311L
  0x00079D10, //GFXMMU_LUT311H
  0x009D2A01, //GFXMMU_LUT312L
  0x0007A450, //GFXMMU_LUT312H
  0x009D2A01, //GFXMMU_LUT313L
  0x0007AB90, //GFXMMU_LUT313H
  0x009D2A01, //GFXMMU_LUT314L
  0x0007B2D0, //GFXMMU_LUT314H
  0x009C2B01, //GFXMMU_LUT315L
  0x0007BA00, //GFXMMU_LUT315H
  0x009C2B01, //GFXMMU_LUT316L
  0x0007C120, //GFXMMU_LUT316H
  0x009C2B01, //GFXMMU_LUT317L
  0x0007C840, //GFXMMU_LUT317H
  0x009C2B01, //GFXMMU_LUT318L
  0x0007CF60, //GFXMMU_LUT318H
  0x009C2B01, //GFXMMU_LUT319L
  0x0007D680, //GFXMMU_LUT319H
  0x009C2B01, //GFXMMU_LUT320L
  0x0007DDA0, //GFXMMU_LUT320H
  0x009C2B01, //GFXMMU_LUT321L
  0x0007E4C0, //GFXMMU_LUT321H
  0x009C2B01, //GFXMMU_LUT322L
  0x0007EBE0, //GFXMMU_LUT322H
  0x009C2B01, //GFXMMU_LUT323L
  0x0007F300, //GFXMMU_LUT323H
  0x009C2B01, //GFXMMU_LUT324L
  0x0007FA20, //GFXMMU_LUT324H
  0x009C2B01, //GFXMMU_LUT325L
  0x00080140, //GFXMMU_LUT325H
  0x009C2B01, //GFXMMU_LUT326L
  0x00080860, //GFXMMU_LUT326H
  0x009B2C01, //GFXMMU_LUT327L
  0x00080F70, //GFXMMU_LUT327H
  0x009B2C01, //GFXMMU_LUT328L
  0x00081670, //GFXMMU_LUT328H
  0x009B2C01, //GFXMMU_LUT329L
  0x00081D70, //GFXMMU_LUT329H
  0x009B2C01, //GFXMMU_LUT330L
  0x00082470, //GFXMMU_LUT330H
  0x009B2C01, //GFXMMU_LUT331L
  0x00082B70, //GFXMMU_LUT331H
  0x009B2C01, //GFXMMU_LUT332L
  0x00083270, //GFXMMU_LUT332H
  0x009B2C01, //GFXMMU_LUT333L
  0x00083970, //GFXMMU_LUT333H
  0x009B2C01, //GFXMMU_LUT334L
  0x00084070, //GFXMMU_LUT334H
  0x009B2C01, //GFXMMU_LUT335L
  0x00084770, //GFXMMU_LUT335H
  0x009A2D01, //GFXMMU_LUT336L
  0x00084E60, //GFXMMU_LUT336H
  0x009A2D01, //GFXMMU_LUT337L
  0x00085540, //GFXMMU_LUT337H
  0x009A2D01, //GFXMMU_LUT338L
  0x00085C20, //GFXMMU_LUT338H
  0x009A2D01, //GFXMMU_LUT339L
  0x00086300, //GFXMMU_LUT339H
  0x009A2D01, //GFXMMU_LUT340L
  0x000869E0, //GFXMMU_LUT340H
  0x009A2D01, //GFXMMU_LUT341L
  0x000870C0, //GFXMMU_LUT341H
  0x009A2D01, //GFXMMU_LUT342L
  0x000877A0, //GFXMMU_LUT342H
  0x009A2D01, //GFXMMU_LUT343L
  0x00087E80, //GFXMMU_LUT343H
  0x009A2D01, //GFXMMU_LUT344L
  0x00088560, //GFXMMU_LUT344H
  0x00992E01, //GFXMMU_LUT345L
  0x00088C30, //GFXMMU_LUT345H
  0x00992E01, //GFXMMU_LUT346L
  0x000892F0, //GFXMMU_LUT346H
  0x00992E01, //GFXMMU_LUT347L
  0x000899B0, //GFXMMU_LUT347H
  0x00992E01, //GFXMMU_LUT348L
  0x0008A070, //GFXMMU_LUT348H
  0x00992E01, //GFXMMU_LUT349L
  0x0008A730, //GFXMMU_LUT349H
  0x00992E01, //GFXMMU_LUT350L
  0x0008ADF0, //GFXMMU_LUT350H
  0x00992E01, //GFXMMU_LUT351L
  0x0008B4B0, //GFXMMU_LUT351H
  0x00992E01, //GFXMMU_LUT352L
  0x0008BB70, //GFXMMU_LUT352H
  0x00982F01, //GFXMMU_LUT353L
  0x0008C220, //GFXMMU_LUT353H
  0x00982F01, //GFXMMU_LUT354L
  0x0008C8C0, //GFXMMU_LUT354H
  0x00982F01, //GFXMMU_LUT355L
  0x0008CF60, //GFXMMU_LUT355H
  0x00982F01, //GFXMMU_LUT356L
  0x0008D600, //GFXMMU_LUT356H
  0x00982F01, //GFXMMU_LUT357L
  0x0008DCA0, //GFXMMU_LUT357H
  0x00982F01, //GFXMMU_LUT358L
  0x0008E340, //GFXMMU_LUT358H
  0x00982F01, //GFXMMU_LUT359L
  0x0008E9E0, //GFXMMU_LUT359H
  0x00973001, //GFXMMU_LUT360L
  0x0008F070, //GFXMMU_LUT360H
  0x00973001, //GFXMMU_LUT361L
  0x0008F6F0, //GFXMMU_LUT361H
  0x00973001, //GFXMMU_LUT362L
  0x0008FD70, //GFXMMU_LUT362H
  0x00973001, //GFXMMU_LUT363L
  0x000903F0, //GFXMMU_LUT363H
  0x00973001, //GFXMMU_LUT364L
  0x00090A70, //GFXMMU_LUT364H
  0x00973001, //GFXMMU_LUT365L
  0x000910F0, //GFXMMU_LUT365H
  0x00973001, //GFXMMU_LUT366L
  0x00091770, //GFXMMU_LUT366H
  0x00963101, //GFXMMU_LUT367L
  0x00091DE0, //GFXMMU_LUT367H
  0x00963101, //GFXMMU_LUT368L
  0x00092440, //GFXMMU_LUT368H
  0x00963101, //GFXMMU_LUT369L
  0x00092AA0, //GFXMMU_LUT369H
  0x00963101, //GFXMMU_LUT370L
  0x00093100, //GFXMMU_LUT370H
  0x00963101, //GFXMMU_LUT371L
  0x00093760, //GFXMMU_LUT371H
  0x00963101, //GFXMMU_LUT372L
  0x00093DC0, //GFXMMU_LUT372H
  0x00953201, //GFXMMU_LUT373L
  0x00094410, //GFXMMU_LUT373H
  0x00953201, //GFXMMU_LUT374L
  0x00094A50, //GFXMMU_LUT374H
  0x00953201, //GFXMMU_LUT375L
  0x00095090, //GFXMMU_LUT375H
  0x00953201, //GFXMMU_LUT376L
  0x000956D0, //GFXMMU_LUT376H
  0x00953201, //GFXMMU_LUT377L
  0x00095D10, //GFXMMU_LUT377H
  0x00953201, //GFXMMU_LUT378L
  0x00096350, //GFXMMU_LUT378H
  0x00943301, //GFXMMU_LUT379L
  0x00096980, //GFXMMU_LUT379H
  0x00943301, //GFXMMU_LUT380L
  0x00096FA0, //GFXMMU_LUT380H
  0x00943301, //GFXMMU_LUT381L
  0x000975C0, //GFXMMU_LUT381H
  0x00943301, //GFXMMU_LUT382L
  0x00097BE0, //GFXMMU_LUT382H
  0x00943301, //GFXMMU_LUT383L
  0x00098200, //GFXMMU_LUT383H
  0x00943401, //GFXMMU_LUT384L
  0x00098810, //GFXMMU_LUT384H
  0x00933401, //GFXMMU_LUT385L
  0x00098E20, //GFXMMU_LUT385H
  0x00933401, //GFXMMU_LUT386L
  0x00099420, //GFXMMU_LUT386H
  0x00933401, //GFXMMU_LUT387L
  0x00099A20, //GFXMMU_LUT387H
  0x00933401, //GFXMMU_LUT388L
  0x0009A020, //GFXMMU_LUT388H
  0x00933401, //GFXMMU_LUT389L
  0x0009A620, //GFXMMU_LUT389H
  0x00923501, //GFXMMU_LUT390L
  0x0009AC10, //GFXMMU_LUT390H
  0x00923501, //GFXMMU_LUT391L
  0x0009B1F0, //GFXMMU_LUT391H
  0x00923501, //GFXMMU_LUT392L
  0x0009B7D0, //GFXMMU_LUT392H
  0x00923501, //GFXMMU_LUT393L
  0x0009BDB0, //GFXMMU_LUT393H
  0x00923501, //GFXMMU_LUT394L
  0x0009C390, //GFXMMU_LUT394H
  0x00913601, //GFXMMU_LUT395L
  0x0009C960, //GFXMMU_LUT395H
  0x00913601, //GFXMMU_LUT396L
  0x0009CF20, //GFXMMU_LUT396H
  0x00913601, //GFXMMU_LUT397L
  0x0009D4E0, //GFXMMU_LUT397H
  0x00913601, //GFXMMU_LUT398L
  0x0009DAA0, //GFXMMU_LUT398H
  0x00903701, //GFXMMU_LUT399L
  0x0009E050, //GFXMMU_LUT399H
  0x00903701, //GFXMMU_LUT400L
  0x0009E5F0, //GFXMMU_LUT400H
  0x00903701, //GFXMMU_LUT401L
  0x0009EB90, //GFXMMU_LUT401H
  0x00903701, //GFXMMU_LUT402L
  0x0009F130, //GFXMMU_LUT402H
  0x00903701, //GFXMMU_LUT403L
  0x0009F6D0, //GFXMMU_LUT403H
  0x008F3801, //GFXMMU_LUT404L
  0x0009FC60, //GFXMMU_LUT404H
  0x008F3801, //GFXMMU_LUT405L
  0x000A01E0, //GFXMMU_LUT405H
  0x008F3801, //GFXMMU_LUT406L
  0x000A0760, //GFXMMU_LUT406H
  0x008F3801, //GFXMMU_LUT407L
  0x000A0CE0, //GFXMMU_LUT407H
  0x008E3901, //GFXMMU_LUT408L
  0x000A1250, //GFXMMU_LUT408H
  0x008E3901, //GFXMMU_LUT409L
  0x000A17B0, //GFXMMU_LUT409H
  0x008E3901, //GFXMMU_LUT410L
  0x000A1D10, //GFXMMU_LUT410H
  0x008E3901, //GFXMMU_LUT411L
  0x000A2270, //GFXMMU_LUT411H
  0x008D3A01, //GFXMMU_LUT412L
  0x000A27C0, //GFXMMU_LUT412H
  0x008D3A01, //GFXMMU_LUT413L
  0x000A2D00, //GFXMMU_LUT413H
  0x008D3A01, //GFXMMU_LUT414L
  0x000A3240, //GFXMMU_LUT414H
  0x008D3A01, //GFXMMU_LUT415L
  0x000A3780, //GFXMMU_LUT415H
  0x008C3B01, //GFXMMU_LUT416L
  0x000A3CB0, //GFXMMU_LUT416H
  0x008C3B01, //GFXMMU_LUT417L
  0x000A41D0, //GFXMMU_LUT417H
  0x008C3B01, //GFXMMU_LUT418L
  0x000A46F0, //GFXMMU_LUT418H
  0x008B3C01, //GFXMMU_LUT419L
  0x000A4C00, //GFXMMU_LUT419H
  0x008B3C01, //GFXMMU_LUT420L
  0x000A5100, //GFXMMU_LUT420H
  0x008B3C01, //GFXMMU_LUT421L
  0x000A5600, //GFXMMU_LUT421H
  0x008B3C01, //GFXMMU_LUT422L
  0x000A5B00, //GFXMMU_LUT422H
  0x008A3D01, //GFXMMU_LUT423L
  0x000A5FF0, //GFXMMU_LUT423H
  0x008A3D01, //GFXMMU_LUT424L
  0x000A64D0, //GFXMMU_LUT424H
  0x008A3D01, //GFXMMU_LUT425L
  0x000A69B0, //GFXMMU_LUT425H
  0x00893E01, //GFXMMU_LUT426L
  0x000A6E80, //GFXMMU_LUT426H
  0x00893E01, //GFXMMU_LUT427L
  0x000A7340, //GFXMMU_LUT427H
  0x00893E01, //GFXMMU_LUT428L
  0x000A7800, //GFXMMU_LUT428H
  0x00883F01, //GFXMMU_LUT429L
  0x000A7CB0, //GFXMMU_LUT429H
  0x00883F01, //GFXMMU_LUT430L
  0x000A8150, //GFXMMU_LUT430H
  0x00883F01, //GFXMMU_LUT431L
  0x000A85F0, //GFXMMU_LUT431H
  0x00884001, //GFXMMU_LUT432L
  0x000A8A80, //GFXMMU_LUT432H
  0x00874001, //GFXMMU_LUT433L
  0x000A8F10, //GFXMMU_LUT433H
  0x00874001, //GFXMMU_LUT434L
  0x000A9390, //GFXMMU_LUT434H
  0x00864101, //GFXMMU_LUT435L
  0x000A9800, //GFXMMU_LUT435H
  0x00864101, //GFXMMU_LUT436L
  0x000A9C60, //GFXMMU_LUT436H
  0x00864101, //GFXMMU_LUT437L
  0x000AA0C0, //GFXMMU_LUT437H
  0x00854201, //GFXMMU_LUT438L
  0x000AA510, //GFXMMU_LUT438H
  0x00854201, //GFXMMU_LUT439L
  0x000AA950, //GFXMMU_LUT439H
  0x00854201, //GFXMMU_LUT440L
  0x000AAD90, //GFXMMU_LUT440H
  0x00844301, //GFXMMU_LUT441L
  0x000AB1C0, //GFXMMU_LUT441H
  0x00844301, //GFXMMU_LUT442L
  0x000AB5E0, //GFXMMU_LUT442H
  0x00844301, //GFXMMU_LUT443L
  0x000ABA00, //GFXMMU_LUT443H
  0x00834401, //GFXMMU_LUT444L
  0x000ABE10, //GFXMMU_LUT444H
  0x00834401, //GFXMMU_LUT445L
  0x000AC210, //GFXMMU_LUT445H
  0x00824501, //GFXMMU_LUT446L
  0x000AC600, //GFXMMU_LUT446H
  0x00824501, //GFXMMU_LUT447L
  0x000AC9E0, //GFXMMU_LUT447H
  0x00814601, //GFXMMU_LUT448L
  0x000ACDB0, //GFXMMU_LUT448H
  0x00814601, //GFXMMU_LUT449L
  0x000AD170, //GFXMMU_LUT449H
  0x00814601, //GFXMMU_LUT450L
  0x000AD530, //GFXMMU_LUT450H
  0x00804701, //GFXMMU_LUT451L
  0x000AD8E0, //GFXMMU_LUT451H
  0x00804701, //GFXMMU_LUT452L
  0x000ADC80, //GFXMMU_LUT452H
  0x007F4801, //GFXMMU_LUT453L
  0x000AE010, //GFXMMU_LUT453H
  0x007F4801, //GFXMMU_LUT454L
  0x000AE390, //GFXMMU_LUT454H
  0x007E4901, //GFXMMU_LUT455L
  0x000AE700, //GFXMMU_LUT455H
  0x007E4901, //GFXMMU_LUT456L
  0x000AEA60, //GFXMMU_LUT456H
  0x007D4A01, //GFXMMU_LUT457L
  0x000AEDB0, //GFXMMU_LUT457H
  0x007D4A01, //GFXMMU_LUT458L
  0x000AF0F0, //GFXMMU_LUT458H
  0x007C4B01, //GFXMMU_LUT459L
  0x000AF420, //GFXMMU_LUT459H
  0x007B4C01, //GFXMMU_LUT460L
  0x000AF730, //GFXMMU_LUT460H
  0x007B4C01, //GFXMMU_LUT461L
  0x000AFA30, //GFXMMU_LUT461H
  0x007A4D01, //GFXMMU_LUT462L
  0x000AFD20, //GFXMMU_LUT462H
  0x007A4D01, //GFXMMU_LUT463L
  0x000B0000, //GFXMMU_LUT463H
  0x00794E01, //GFXMMU_LUT464L
  0x000B02D0, //GFXMMU_LUT464H
  0x00784F01, //GFXMMU_LUT465L
  0x000B0580, //GFXMMU_LUT465H
  0x00784F01, //GFXMMU_LUT466L
  0x000B0820, //GFXMMU_LUT466H
  0x00775001, //GFXMMU_LUT467L
  0x000B0AB0, //GFXMMU_LUT467H
  0x00765101, //GFXMMU_LUT468L
  0x000B0D20, //GFXMMU_LUT468H
  0x00755201, //GFXMMU_LUT469L
  0x000B0F70, //GFXMMU_LUT469H
  0x00755201, //GFXMMU_LUT470L
  0x000B11B0, //GFXMMU_LUT470H
  0x00745301, //GFXMMU_LUT471L
  0x000B13E0, //GFXMMU_LUT471H
  0x00735401, //GFXMMU_LUT472L
  0x000B15F0, //GFXMMU_LUT472H
  0x00725501, //GFXMMU_LUT473L
  0x000B17E0, //GFXMMU_LUT473H
  0x00715601, //GFXMMU_LUT474L
  0x000B19B0, //GFXMMU_LUT474H
  0x00705701, //GFXMMU_LUT475L
  0x000B1B60, //GFXMMU_LUT475H
  0x006E5901, //GFXMMU_LUT476L
  0x000B1CE0, //GFXMMU_LUT476H
  0x006D5A01, //GFXMMU_LUT477L
  0x000B1E30, //GFXMMU_LUT477H
  0x006B5C01, //GFXMMU_LUT478L
  0x000B1F50, //GFXMMU_LUT478H
  0x00695E01, //GFXMMU_LUT479L
  0x000B2030 //GFXMMU_LUT479H
};
