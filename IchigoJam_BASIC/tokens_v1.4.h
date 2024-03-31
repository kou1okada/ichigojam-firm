#define N_TOKEN 130
#define TOKEN_NULL 0
#define TOKEN_VAR 1
#define TOKEN_NUMBER 2
#define TOKEN_ERROR 3
#define TOKEN_LAND_1 4
#define TOKEN_LOR_1 5
#define TOKEN_NOT 6
#define TOKEN_AND 7
#define TOKEN_XOR 8
#define TOKEN_SHIFT_R 9
#define TOKEN_SHIFT_L 10
#define TOKEN_ASTER 11
#define TOKEN_SLASH 12
#define TOKEN_MOD_1 13
#define TOKEN_MOD_2 14
#define TOKEN_PLUS 15
#define TOKEN_MINUS 16
#define TOKEN_OR 17
#define TOKEN_EQEQ 18
#define TOKEN_EQ 19
#define TOKEN_NE_1 20
#define TOKEN_NE_2 21
#define TOKEN_NE_3 22
#define TOKEN_LE 23
#define TOKEN_LT 24
#define TOKEN_GE 25
#define TOKEN_GT 26
#define TOKEN_LAND_2 27
#define TOKEN_LOR_2 28
#define TOKEN_LNOT_1 29
#define TOKEN_LNOT_2 30
#define TOKEN_ARRAY 31
#define TOKEN_ARRAY_E 32
#define TOKEN_PAREN_B 33
#define TOKEN_PAREN_E 34
#define TOKEN_STRING 35
#define TOKEN_AT 36
#define TOKEN_USR 37
#define TOKEN_ABS 38
#define TOKEN_RND 39
#define TOKEN_PEEK_1 40
#define TOKEN_INKEY 41
#define TOKEN_TICK 42
#define TOKEN_SCR 43
#define TOKEN_PEEK_2 44
#define TOKEN_POINT 45
#define TOKEN_IN 46
#define TOKEN_ANA 47
#define TOKEN_I2CR 48
#define TOKEN_I2CW 49
#define TOKEN_BTN 50
#define TOKEN_POS 51
#define TOKEN_SOUND 52
#define TOKEN_VPEEK 53
#define TOKEN_LEN 54
#define TOKEN_FILE 55
#define TOKEN_LINE 56
#define TOKEN_LEFT 57
#define TOKEN_RIGHT 58
#define TOKEN_UP 59
#define TOKEN_DOWN 60
#define TOKEN_SPACE 61
#define TOKEN_FREE 62
#define TOKEN_VER 63
#define TOKEN_IOT_IN 64
#define TOKEN_SIN 65
#define TOKEN_COS 66
#define TOKEN_LET 67
#define TOKEN_IF 68
#define TOKEN_FOR 69
#define TOKEN_NEXT 70
#define TOKEN_GOTO 71
#define TOKEN_GOSUB_1 72
#define TOKEN_RETURN_1 73
#define TOKEN_GOSUB_2 74
#define TOKEN_RETURN_2 75
#define TOKEN_PRINT_1 76
#define TOKEN_LOCATE_1 77
#define TOKEN_PRINT_2 78
#define TOKEN_LOCATE_2 79
#define TOKEN_POKE 80
#define TOKEN_SCROLL 81
#define TOKEN_COPY 82
#define TOKEN_WAIT 83
#define TOKEN_OUT 84
#define TOKEN_PWM 85
#define TOKEN_LED 86
#define TOKEN_BEEP 87
#define TOKEN_PLAY 88
#define TOKEN_TEMPO 89
#define TOKEN_UART 90
#define TOKEN_SRND 91
#define TOKEN_CLT 92
#define TOKEN_CLS 93
#define TOKEN_CLV_1 94
#define TOKEN_CLK 95
#define TOKEN_CLP 96
#define TOKEN_CLO 97
#define TOKEN_CLV_2 98
#define TOKEN_VIDEO 99
#define TOKEN_SLEEP 100
#define TOKEN_INPUT 101
#define TOKEN_REM_1 102
#define TOKEN_DRAW 103
#define TOKEN_NEW 104
#define TOKEN_LIST 105
#define TOKEN_RUN 106
#define TOKEN_END 107
#define TOKEN_STOP 108
#define TOKEN_CONT 109
#define TOKEN_LOAD 110
#define TOKEN_LRUN 111
#define TOKEN_SAVE 112
#define TOKEN_FILES 113
#define TOKEN_RENUM 114
#define TOKEN_BPS 115
#define TOKEN_LCD 116
#define TOKEN_OK 117
#define TOKEN_HELP 118
#define TOKEN_RESET 119
#define TOKEN_ELSE 120
#define TOKEN_TO 121
#define TOKEN_STEP 122
#define TOKEN_THEN 123
#define TOKEN_REM_2 124
#define TOKEN_COMMA 125
#define TOKEN_IOT_OUT 126
#define TOKEN_WS_LED 127
#define TOKEN_CHR 128
#define TOKEN_STR 129
#define TOKEN_DEC 130
#define TOKEN_HEX 131
#define TOKEN_BIN 132
#define TOKEN_SEMICOLON 133
static const uint8 TOKENS[] = "\003&&\003||\002~\002&\002^\003>>\003<<\002*\002/\002%\004MOD\002+\002-\002|\003==\002=\003!=\003<>\003><\003<=\002<\003>=\002>\004AND\003OR\002!\004NOT\002[\002]\002(\002)\002\"\002@\005USR(\005ABS(\005RND(\005ASC(\007INKEY(\006TICK(\005SCR(\006PEEK(\007POINT(\004IN(\005ANA(\006I2CR(\006I2CW(\005BTN(\005POS(\007SOUND(\007VPEEK(\005LEN(\007FILE()\007LINE()\005LEFT\006RIGHT\003UP\005DOWN\006SPACE\007FREE()\005VER(\011IOT.IN()\005SIN(\005COS(\004LET\003IF\004FOR\005NEXT\005GOTO\004GSB\004RTN\006GOSUB\007RETURN\002?\003LC\006PRINT\007LOCATE\005POKE\007SCROLL\005COPY\005WAIT\004OUT\004PWM\004LED\005BEEP\005PLAY\006TEMPO\005UART\005SRND\004CLT\004CLS\004CLV\004CLK\004CLP\004CLO\006CLEAR\006VIDEO\006SLEEP\006INPUT\004REM\005DRAW\004NEW\005LIST\004RUN\004END\005STOP\005CONT\005LOAD\005LRUN\005SAVE\006FILES\006RENUM\004BPS\007SWITCH\003OK\005HELP\006RESET\005ELSE\003TO\005STEP\005THEN\002'\002,\010IOT.OUT\007WS.LED\006CHR$(\006STR$(\006DEC$(\006HEX$(\006BIN$(\002;";