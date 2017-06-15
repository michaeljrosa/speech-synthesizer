/**
 * Allophone sequences for common english words
 * Provided by the SP0256-AL2 datasheet
 * Use pauses as appropriate
 */

 
// Numbers (and homophones)
#define   ZERO        ZZ, YR, OW
#define   ONE         WW, AX, AX, NN1
#define   WON         ONE
#define   TWO         TT2, UW2
#define   TO          TWO
#define   TOO         TWO
#define   THREE       TH, RR1, IY
#define   FOUR        FF, FF, OR
#define   FOR         FOUR
#define   FORE        FOUR
#define   FIVE        FF, FF, AY, VV
#define   SIX         SS, SS, IH, IH, PA3, KK2, SS
#define   SEVEN       SS, SS, EH, EH, VV, IH, NN1
#define   EIGHT       EY, PA3, TT2
#define   ATE         EIGHT
#define   NINE        NN1, AA, AY, NN1
#define   TEN         TT2, EH, EH, NN1
#define   ELEVEN      IH, LL, EH, EH, VV, IH, NN1
#define   TWELVE      TT2, WH, EH, EH, LL, VV
#define   THIRTEEN    TH, ER1, PA2, PA3, TT2, IY, NN1
#define   FOURTEEN    FF, OR, PA2, PA3, TT2, IY, NN1
#define   FIFTEEN     FF, IH, FF, PA2, PA3, TT2, IY, NN1
#define   SIXTEEN     SS, SS, IH, PA3, KK2, SS, PA2, PA3, TT2, IY, NN1
#define   SEVENTEEN   SS, SS, EH, VV, TH, NN1, PA2, PA3, TT2, IY, NN1
#define   EIGHTEEN    EY, PA2, PA3, TT2, IY, NN1
#define   NINETEEN    NN1, AY, NN1, PA2, PA3, TT2, IY, NN1
#define   TWENTY      TT2, WH, EH, EH, NN1, PA2, PA3, TT2, IY
#define   THIRTY      TH, ER2, PA2, PA3, TT2, IY
#define   FORTY       FF, OR, PA3, TT2, IY
#define   FIFTY       FF, FF, IH, FF, FF, PA2, PA3, TT2, IY
#define   SIXTY       SS, SS, IH, PA3, KK2, SS, PA2, PA3, TT2, IY
#define   SEVENTY     SS, SS, EH, VV, IH, NN1, PA2, PA3, TT2, IY
#define   EIGHTY      EY, PA3, TT2, IY
#define   NINETY      NN1, AY, NN1, PA3, TT2, IY
#define   HUNDRED     HH2, AX, AX, NN1, PA2, rDD2, RR2, IH, IH, PA1, rDD1
#define   THOUSAND    TH, AA, AW, ZZ, TH, PA1, PA1, NN1, rDD1
#define   MILLION     MM, IH, IH, LL, YY1, AX, NN1


// Days of the week
#define   SUNDAY      SS, SS, AX, AX, NN1, PA2, rDD2, EY
#define   MONDAY      MM, AX, AX, NN1,PA2, rDD2, EY
#define   TUESDAY     TT2, UW2, ZZ, PA2, rDD2, EY
#define   WEDNESDAY   WW, EH, EH, NN1, ZZ, PA2, rDD2, EY
#define   THURSDAY    TH, ER2, ZZ, PA2, rDD2, EY
#define   FRIDAY      FF, RR2, AY, PA2, rDD2, EY
#define   SATURDAY    SS, SS, AE, PA3, TT2, ER1, PA2, rDD2, EY


// Months
#define   JANUARY     JH, AE, AE, NN1, YY2, XR, IY
#define   FEBRUARY    FF, EH, EH, PA1, BB1, RR2, UW2, XR, IY
#define   MARCH       MM, AR, PA3, CH
#define   APRIL       EY, PA3, PP, RR2, IH, IH, LL
#define   MAY         MM, EY
#define   JUNE        JH, UW2, NN1
#define   JULY        JH, UW1, LL, AY
#define   AUGUST      AO, AO, PA2, GG2, AX, SS, PA3, TT1
#define   SEPTEMBER   SS, SS, EH, PA3, PP, PA3, TT2, EH, EH, MM, PA1, BB2, ER1
#define   OCTOBER     AA, PA2, KK2, PA3, TT2, OW, PA1, BB2, ER1
#define   NOVEMBER    NN2, OW, VV, EH, EH, MM, PA1, BB2, ER1
#define   DECEMBER    rDD2, IY, SS, SS, EH, EH, MM, PA1, BB2, ER1


// Letters
#define   A   EY
#define   B   BB2, IY
#define   C   SS, SS, IY
#define   D   rDD2, IY
#define   E   IY
#define   F   EH, EH, FF, FF
#define   G   JH, IY
#define   H   EY, PA2, PA3, CH
#define   I   AA, AY
#define   J   JH, EH, EY
#define   K   KK1, EH, EY
#define   L   EH, EH, EL
#define   M   EH, EH, MM
#define   N   EH, EH, NN1
#define   O   OW
#define   P   PP, IY
#define   Q   KK1, YY1, UW2
#define   R   AR
#define   S   EH, EH, SS, SS
#define   T   TT2, IY
#define   U   YY1, UW2
#define   V   VV, IY
#define   W   rDD2, AX, PA2, BB2, EL, YY1, UW2
#define   X   EH, EH, PA3, KK2, SS, SS
#define   Y   WW, AY
#define   Z   ZZ, IY


// Dictionary
#define   ALARM        AX, LL, AR, MM
#define   AM           AE, MM

#define   GENERAL      JH, EH, NN1, ER1, EL

#define   HELLO        HH1, EH, LL, AX, OW

#define   INSTRUMENT   IH, NN1, SS, PA2, TT2, RR2, AX, MM, EH, NN1, TT2

#define   THE          DH1, AX

#define   VARIANT      VV, XR, IY, IH, NN1, PA1, TT2