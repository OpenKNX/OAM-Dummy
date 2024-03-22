#pragma once


#define paramDelay(time) (uint32_t)( \
            (time & 0xC000) == 0xC000 ? (time & 0x3FFF) * 100 : \
            (time & 0xC000) == 0x0000 ? (time & 0x3FFF) * 1000 : \
            (time & 0xC000) == 0x4000 ? (time & 0x3FFF) * 60000 : \
            (time & 0xC000) == 0x8000 ? ((time & 0x3FFF) > 1000 ? 3600000 : \
                                         (time & 0x3FFF) * 3600000 ) : 0 )
                                             
#define MAIN_OpenKnxId 0xA0
#define MAIN_ApplicationNumber 5
#define MAIN_ApplicationVersion 13
#define MAIN_ParameterSize 0
#define MAIN_MaxKoNumber 99
#define MAIN_OrderNumber "0xA005"
// Parameter with single occurrence




#define DUMMY_ChannelCount 99

// Parameter per channel
#define DUMMY_ParamBlockOffset 0
#define DUMMY_ParamBlockSize -1
#define DUMMY_ParamCalcIndex(index) (index + DUMMY_ParamBlockOffset + _channelIndex * DUMMY_ParamBlockSize)



// deprecated
#define DUMMY_KoOffset 1

// Communication objects per channel (multiple occurrence)
#define DUMMY_KoBlockOffset 1
#define DUMMY_KoBlockSize 1

#define DUMMY_KoCalcNumber(index) (index + DUMMY_KoBlockOffset + _channelIndex * DUMMY_KoBlockSize)
#define DUMMY_KoCalcIndex(number) ((number >= DUMMY_KoCalcNumber(0) && number < DUMMY_KoCalcNumber(DUMMY_KoBlockSize)) ? (number - DUMMY_KoBlockOffset) % DUMMY_KoBlockSize : -1)
#define DUMMY_KoCalcChannel(number) ((number >= DUMMY_KoBlockOffset && number < DUMMY_KoBlockOffset + DUMMY_ChannelCount * DUMMY_KoBlockSize) ? (number - DUMMY_KoBlockOffset) / DUMMY_KoBlockSize : -1)

#define DUMMY_KoKO 0

// {{0:Objekt}}
#define KoDUMMY_KO                                  (knx.getGroupObject(DUMMY_KoCalcNumber(DUMMY_KoKO)))

// Communication objects with single occurrence
#define KoDUMMY_KO1 1
#define KoDUMMY_KO2 2
#define KoDUMMY_KO3 3
#define KoDUMMY_KO4 4
#define KoDUMMY_KO5 5
#define KoDUMMY_KO6 6
#define KoDUMMY_KO7 7
#define KoDUMMY_KO8 8
#define KoDUMMY_KO9 9
#define KoDUMMY_KO10 10
#define KoDUMMY_KO11 11
#define KoDUMMY_KO12 12
#define KoDUMMY_KO13 13
#define KoDUMMY_KO14 14
#define KoDUMMY_KO15 15
#define KoDUMMY_KO16 16
#define KoDUMMY_KO17 17
#define KoDUMMY_KO18 18
#define KoDUMMY_KO19 19
#define KoDUMMY_KO20 20
#define KoDUMMY_KO21 21
#define KoDUMMY_KO22 22
#define KoDUMMY_KO23 23
#define KoDUMMY_KO24 24
#define KoDUMMY_KO25 25
#define KoDUMMY_KO26 26
#define KoDUMMY_KO27 27
#define KoDUMMY_KO28 28
#define KoDUMMY_KO29 29
#define KoDUMMY_KO30 30
#define KoDUMMY_KO31 31
#define KoDUMMY_KO32 32
#define KoDUMMY_KO33 33
#define KoDUMMY_KO34 34
#define KoDUMMY_KO35 35
#define KoDUMMY_KO36 36
#define KoDUMMY_KO37 37
#define KoDUMMY_KO38 38
#define KoDUMMY_KO39 39
#define KoDUMMY_KO40 40
#define KoDUMMY_KO41 41
#define KoDUMMY_KO42 42
#define KoDUMMY_KO43 43
#define KoDUMMY_KO44 44
#define KoDUMMY_KO45 45
#define KoDUMMY_KO46 46
#define KoDUMMY_KO47 47
#define KoDUMMY_KO48 48
#define KoDUMMY_KO49 49
#define KoDUMMY_KO50 50
#define KoDUMMY_KO51 51
#define KoDUMMY_KO52 52
#define KoDUMMY_KO53 53
#define KoDUMMY_KO54 54
#define KoDUMMY_KO55 55
#define KoDUMMY_KO56 56
#define KoDUMMY_KO57 57
#define KoDUMMY_KO58 58
#define KoDUMMY_KO59 59
#define KoDUMMY_KO60 60
#define KoDUMMY_KO61 61
#define KoDUMMY_KO62 62
#define KoDUMMY_KO63 63
#define KoDUMMY_KO64 64
#define KoDUMMY_KO65 65
#define KoDUMMY_KO66 66
#define KoDUMMY_KO67 67
#define KoDUMMY_KO68 68
#define KoDUMMY_KO69 69
#define KoDUMMY_KO70 70
#define KoDUMMY_KO71 71
#define KoDUMMY_KO72 72
#define KoDUMMY_KO73 73
#define KoDUMMY_KO74 74
#define KoDUMMY_KO75 75
#define KoDUMMY_KO76 76
#define KoDUMMY_KO77 77
#define KoDUMMY_KO78 78
#define KoDUMMY_KO79 79
#define KoDUMMY_KO80 80
#define KoDUMMY_KO81 81
#define KoDUMMY_KO82 82
#define KoDUMMY_KO83 83
#define KoDUMMY_KO84 84
#define KoDUMMY_KO85 85
#define KoDUMMY_KO86 86
#define KoDUMMY_KO87 87
#define KoDUMMY_KO88 88
#define KoDUMMY_KO89 89
#define KoDUMMY_KO90 90
#define KoDUMMY_KO91 91
#define KoDUMMY_KO92 92
#define KoDUMMY_KO93 93
#define KoDUMMY_KO94 94
#define KoDUMMY_KO95 95
#define KoDUMMY_KO96 96
#define KoDUMMY_KO97 97
#define KoDUMMY_KO98 98
#define KoDUMMY_KO99 99

// {{0:Objekt}}
#define KoDUMMY_KO1                           (knx.getGroupObject(KoDUMMY_KO1))
// {{0:Objekt}}
#define KoDUMMY_KO2                           (knx.getGroupObject(KoDUMMY_KO2))
// {{0:Objekt}}
#define KoDUMMY_KO3                           (knx.getGroupObject(KoDUMMY_KO3))
// {{0:Objekt}}
#define KoDUMMY_KO4                           (knx.getGroupObject(KoDUMMY_KO4))
// {{0:Objekt}}
#define KoDUMMY_KO5                           (knx.getGroupObject(KoDUMMY_KO5))
// {{0:Objekt}}
#define KoDUMMY_KO6                           (knx.getGroupObject(KoDUMMY_KO6))
// {{0:Objekt}}
#define KoDUMMY_KO7                           (knx.getGroupObject(KoDUMMY_KO7))
// {{0:Objekt}}
#define KoDUMMY_KO8                           (knx.getGroupObject(KoDUMMY_KO8))
// {{0:Objekt}}
#define KoDUMMY_KO9                           (knx.getGroupObject(KoDUMMY_KO9))
// {{0:Objekt}}
#define KoDUMMY_KO10                          (knx.getGroupObject(KoDUMMY_KO10))
// {{0:Objekt}}
#define KoDUMMY_KO11                          (knx.getGroupObject(KoDUMMY_KO11))
// {{0:Objekt}}
#define KoDUMMY_KO12                          (knx.getGroupObject(KoDUMMY_KO12))
// {{0:Objekt}}
#define KoDUMMY_KO13                          (knx.getGroupObject(KoDUMMY_KO13))
// {{0:Objekt}}
#define KoDUMMY_KO14                          (knx.getGroupObject(KoDUMMY_KO14))
// {{0:Objekt}}
#define KoDUMMY_KO15                          (knx.getGroupObject(KoDUMMY_KO15))
// {{0:Objekt}}
#define KoDUMMY_KO16                          (knx.getGroupObject(KoDUMMY_KO16))
// {{0:Objekt}}
#define KoDUMMY_KO17                          (knx.getGroupObject(KoDUMMY_KO17))
// {{0:Objekt}}
#define KoDUMMY_KO18                          (knx.getGroupObject(KoDUMMY_KO18))
// {{0:Objekt}}
#define KoDUMMY_KO19                          (knx.getGroupObject(KoDUMMY_KO19))
// {{0:Objekt}}
#define KoDUMMY_KO20                          (knx.getGroupObject(KoDUMMY_KO20))
// {{0:Objekt}}
#define KoDUMMY_KO21                          (knx.getGroupObject(KoDUMMY_KO21))
// {{0:Objekt}}
#define KoDUMMY_KO22                          (knx.getGroupObject(KoDUMMY_KO22))
// {{0:Objekt}}
#define KoDUMMY_KO23                          (knx.getGroupObject(KoDUMMY_KO23))
// {{0:Objekt}}
#define KoDUMMY_KO24                          (knx.getGroupObject(KoDUMMY_KO24))
// {{0:Objekt}}
#define KoDUMMY_KO25                          (knx.getGroupObject(KoDUMMY_KO25))
// {{0:Objekt}}
#define KoDUMMY_KO26                          (knx.getGroupObject(KoDUMMY_KO26))
// {{0:Objekt}}
#define KoDUMMY_KO27                          (knx.getGroupObject(KoDUMMY_KO27))
// {{0:Objekt}}
#define KoDUMMY_KO28                          (knx.getGroupObject(KoDUMMY_KO28))
// {{0:Objekt}}
#define KoDUMMY_KO29                          (knx.getGroupObject(KoDUMMY_KO29))
// {{0:Objekt}}
#define KoDUMMY_KO30                          (knx.getGroupObject(KoDUMMY_KO30))
// {{0:Objekt}}
#define KoDUMMY_KO31                          (knx.getGroupObject(KoDUMMY_KO31))
// {{0:Objekt}}
#define KoDUMMY_KO32                          (knx.getGroupObject(KoDUMMY_KO32))
// {{0:Objekt}}
#define KoDUMMY_KO33                          (knx.getGroupObject(KoDUMMY_KO33))
// {{0:Objekt}}
#define KoDUMMY_KO34                          (knx.getGroupObject(KoDUMMY_KO34))
// {{0:Objekt}}
#define KoDUMMY_KO35                          (knx.getGroupObject(KoDUMMY_KO35))
// {{0:Objekt}}
#define KoDUMMY_KO36                          (knx.getGroupObject(KoDUMMY_KO36))
// {{0:Objekt}}
#define KoDUMMY_KO37                          (knx.getGroupObject(KoDUMMY_KO37))
// {{0:Objekt}}
#define KoDUMMY_KO38                          (knx.getGroupObject(KoDUMMY_KO38))
// {{0:Objekt}}
#define KoDUMMY_KO39                          (knx.getGroupObject(KoDUMMY_KO39))
// {{0:Objekt}}
#define KoDUMMY_KO40                          (knx.getGroupObject(KoDUMMY_KO40))
// {{0:Objekt}}
#define KoDUMMY_KO41                          (knx.getGroupObject(KoDUMMY_KO41))
// {{0:Objekt}}
#define KoDUMMY_KO42                          (knx.getGroupObject(KoDUMMY_KO42))
// {{0:Objekt}}
#define KoDUMMY_KO43                          (knx.getGroupObject(KoDUMMY_KO43))
// {{0:Objekt}}
#define KoDUMMY_KO44                          (knx.getGroupObject(KoDUMMY_KO44))
// {{0:Objekt}}
#define KoDUMMY_KO45                          (knx.getGroupObject(KoDUMMY_KO45))
// {{0:Objekt}}
#define KoDUMMY_KO46                          (knx.getGroupObject(KoDUMMY_KO46))
// {{0:Objekt}}
#define KoDUMMY_KO47                          (knx.getGroupObject(KoDUMMY_KO47))
// {{0:Objekt}}
#define KoDUMMY_KO48                          (knx.getGroupObject(KoDUMMY_KO48))
// {{0:Objekt}}
#define KoDUMMY_KO49                          (knx.getGroupObject(KoDUMMY_KO49))
// {{0:Objekt}}
#define KoDUMMY_KO50                          (knx.getGroupObject(KoDUMMY_KO50))
// {{0:Objekt}}
#define KoDUMMY_KO51                          (knx.getGroupObject(KoDUMMY_KO51))
// {{0:Objekt}}
#define KoDUMMY_KO52                          (knx.getGroupObject(KoDUMMY_KO52))
// {{0:Objekt}}
#define KoDUMMY_KO53                          (knx.getGroupObject(KoDUMMY_KO53))
// {{0:Objekt}}
#define KoDUMMY_KO54                          (knx.getGroupObject(KoDUMMY_KO54))
// {{0:Objekt}}
#define KoDUMMY_KO55                          (knx.getGroupObject(KoDUMMY_KO55))
// {{0:Objekt}}
#define KoDUMMY_KO56                          (knx.getGroupObject(KoDUMMY_KO56))
// {{0:Objekt}}
#define KoDUMMY_KO57                          (knx.getGroupObject(KoDUMMY_KO57))
// {{0:Objekt}}
#define KoDUMMY_KO58                          (knx.getGroupObject(KoDUMMY_KO58))
// {{0:Objekt}}
#define KoDUMMY_KO59                          (knx.getGroupObject(KoDUMMY_KO59))
// {{0:Objekt}}
#define KoDUMMY_KO60                          (knx.getGroupObject(KoDUMMY_KO60))
// {{0:Objekt}}
#define KoDUMMY_KO61                          (knx.getGroupObject(KoDUMMY_KO61))
// {{0:Objekt}}
#define KoDUMMY_KO62                          (knx.getGroupObject(KoDUMMY_KO62))
// {{0:Objekt}}
#define KoDUMMY_KO63                          (knx.getGroupObject(KoDUMMY_KO63))
// {{0:Objekt}}
#define KoDUMMY_KO64                          (knx.getGroupObject(KoDUMMY_KO64))
// {{0:Objekt}}
#define KoDUMMY_KO65                          (knx.getGroupObject(KoDUMMY_KO65))
// {{0:Objekt}}
#define KoDUMMY_KO66                          (knx.getGroupObject(KoDUMMY_KO66))
// {{0:Objekt}}
#define KoDUMMY_KO67                          (knx.getGroupObject(KoDUMMY_KO67))
// {{0:Objekt}}
#define KoDUMMY_KO68                          (knx.getGroupObject(KoDUMMY_KO68))
// {{0:Objekt}}
#define KoDUMMY_KO69                          (knx.getGroupObject(KoDUMMY_KO69))
// {{0:Objekt}}
#define KoDUMMY_KO70                          (knx.getGroupObject(KoDUMMY_KO70))
// {{0:Objekt}}
#define KoDUMMY_KO71                          (knx.getGroupObject(KoDUMMY_KO71))
// {{0:Objekt}}
#define KoDUMMY_KO72                          (knx.getGroupObject(KoDUMMY_KO72))
// {{0:Objekt}}
#define KoDUMMY_KO73                          (knx.getGroupObject(KoDUMMY_KO73))
// {{0:Objekt}}
#define KoDUMMY_KO74                          (knx.getGroupObject(KoDUMMY_KO74))
// {{0:Objekt}}
#define KoDUMMY_KO75                          (knx.getGroupObject(KoDUMMY_KO75))
// {{0:Objekt}}
#define KoDUMMY_KO76                          (knx.getGroupObject(KoDUMMY_KO76))
// {{0:Objekt}}
#define KoDUMMY_KO77                          (knx.getGroupObject(KoDUMMY_KO77))
// {{0:Objekt}}
#define KoDUMMY_KO78                          (knx.getGroupObject(KoDUMMY_KO78))
// {{0:Objekt}}
#define KoDUMMY_KO79                          (knx.getGroupObject(KoDUMMY_KO79))
// {{0:Objekt}}
#define KoDUMMY_KO80                          (knx.getGroupObject(KoDUMMY_KO80))
// {{0:Objekt}}
#define KoDUMMY_KO81                          (knx.getGroupObject(KoDUMMY_KO81))
// {{0:Objekt}}
#define KoDUMMY_KO82                          (knx.getGroupObject(KoDUMMY_KO82))
// {{0:Objekt}}
#define KoDUMMY_KO83                          (knx.getGroupObject(KoDUMMY_KO83))
// {{0:Objekt}}
#define KoDUMMY_KO84                          (knx.getGroupObject(KoDUMMY_KO84))
// {{0:Objekt}}
#define KoDUMMY_KO85                          (knx.getGroupObject(KoDUMMY_KO85))
// {{0:Objekt}}
#define KoDUMMY_KO86                          (knx.getGroupObject(KoDUMMY_KO86))
// {{0:Objekt}}
#define KoDUMMY_KO87                          (knx.getGroupObject(KoDUMMY_KO87))
// {{0:Objekt}}
#define KoDUMMY_KO88                          (knx.getGroupObject(KoDUMMY_KO88))
// {{0:Objekt}}
#define KoDUMMY_KO89                          (knx.getGroupObject(KoDUMMY_KO89))
// {{0:Objekt}}
#define KoDUMMY_KO90                          (knx.getGroupObject(KoDUMMY_KO90))
// {{0:Objekt}}
#define KoDUMMY_KO91                          (knx.getGroupObject(KoDUMMY_KO91))
// {{0:Objekt}}
#define KoDUMMY_KO92                          (knx.getGroupObject(KoDUMMY_KO92))
// {{0:Objekt}}
#define KoDUMMY_KO93                          (knx.getGroupObject(KoDUMMY_KO93))
// {{0:Objekt}}
#define KoDUMMY_KO94                          (knx.getGroupObject(KoDUMMY_KO94))
// {{0:Objekt}}
#define KoDUMMY_KO95                          (knx.getGroupObject(KoDUMMY_KO95))
// {{0:Objekt}}
#define KoDUMMY_KO96                          (knx.getGroupObject(KoDUMMY_KO96))
// {{0:Objekt}}
#define KoDUMMY_KO97                          (knx.getGroupObject(KoDUMMY_KO97))
// {{0:Objekt}}
#define KoDUMMY_KO98                          (knx.getGroupObject(KoDUMMY_KO98))
// {{0:Objekt}}
#define KoDUMMY_KO99                          (knx.getGroupObject(KoDUMMY_KO99))

