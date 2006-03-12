/**
 * \file smiles.c
 * This file contains the #smiles table.
 */
#include "smiles.h"

/**
 * \brief Mapping of xchat smile numbers to human readable ones.
 */
const char *smiles[] = {
    [1] ":D",
    [2] ":))",
    [3] ":DD",
    [4] ";)",
    [5] "8)",
    [6] ":)",
    [7] ":|",
    [8] ":/",
    [9] ":o",
    [10] ":(",
    [11] ">:(",
    [12] ":\'(",
    [13] "*andel/dabel*",
    [14] "*smoking*",
    [15] "*srdce*",
    [16] "*kytka*",
    [17] ":{",
    [18] "=)",
    [19] "*skaredy pohled*",
    [20] ":.)",
    [21] "*mimo*",
    [22] "*pivo*",
    [23] ":-**",
    [24] "*fialovej :)*",
    [25] "*zamilovane oci*",
    [26] "*mmnt*",
    [27] "*amor*",
    [28] "*zarofka*",
    [29] "*hodiny*",
    [30] "*nadava*",
    [31] "*slunicko*",
    [32] "*oblizovak*",
    [33] "*telefon*",
    [34] "*rozhledne se a pak :)*",
    [35] "*kafe*",
    [36] "*cwok*",
    [37] ":-E",
    [38] "*zmotanej xicht*",
    [39] ">E",
    [40] "*zubatej*",
    [41] "*odpurce*",
    [42] "*cervena se*",
    [43] "8",
    [44] "*:) rotuje*",
    [45] ":-*",
    [46] "*bezi*",
    [47] "*hihihi*",
    [48] "*rose*",
    [49] "*dabel :D*",
    [50] ":]",
    [51] "*nesouhlasi*",
    [52] "*souhlasi*",
    [53] "*chrrr*",
    [54] "*stopa*",
    [55] "*vozickar*",
    [56] "*KISS*",
    [57] "*beruska*",
    [58] "*hamburger*",
    [59] "*ziiv*",
    [60] "*ufoun*",
    [61] "*kocka*",
    [62] "*vozrala*",
    [63] "*d:*",
    [64] "*pichacka*",
    [65] "*exit*",
    [66] "*dabel :)*",
    [67] "*duhovej smile*",
    [68] "*bobr :)*",
    [69] "*ee*",
    [70] ":P",
    [71] "*omg*",
    [72] "*nesmelej :D*",
    [73] "*zaba*",
    [74] "*?*",
    [75] "*deska*",
    [76] ":)",
    [77] "*rit*",
    [78] "*bleje*",
    [79] ";)",
    [80] "*smrtka*",
    [81] "*baby*",
    [82] "*skakajici zelenej curak*",
    [83] ":((",
    [84] "*karatista*",
    [85] "*cervena se*",
    [86] "*mava*",
    [87] "*mava*",
    [88] "*oboci*",
    [89] "*pivo*",
    [90] "*!*",
    [91] "*upir*",
    [92] ":p",
    [93] "*mrak*",
    [94] "*zemekoule*",
    [95] "*runner*",
    [96] "*snehulak*",
    [97] "*mesic*",
    [98] "[:)]",
    [99] "*zelva ninja*",
    [100] "*srdce s voblicejem*",
    [101] "*pirat*",
    [102] "*bu bu bu*",
    [103] "*lahev*",
    [104] "*disco*",
    [105] "*nevim*",
    [106] "*kamaradi*",
    [107] "*duel*",
    [108] "*domluveno*",
    [109] "*rum*",
    [110] "*vader*",
    [111] ":PP",
    [112] ":D",
    [113] ":>",
    [114] "8)",
    [115] ";)",
    [116] ":)",
    [117] "*pohoda*",
    [118] ">:)",
    [119] "8(",
    [120] "*vyvoleni*",
    [121] ":((",
    [122] ":(((",
    [123] ":-**",
    [124] "*bond*",
    [125] "*pusa*",
    [126] "*smoking*",
    [127] "*cartman*",
    [128] ";)",
    [129] "%-/",
    [130] ":\'(",
    [131] "*vyvoleni*",
    [132] "*K.O.*",
    [133] "*fuck off*",
    [134] "*jujky*",
    [135] ":D",
    [136] "*had*",
    [137] "*zamek*",
    [138] "*hvezda*",
    [139] "*nadava*",
    [140] "*pubertak*",
    [141] "*megafon*",
    [142] "*exhibice*",
    [143] "*nuzky*",
    [144] "*nevim*",
    [145] "*zmlaceny*",
    [146] "*mario*",
    [147] "*ruzove srdce*",
    [148] "*oki*",
    [149] "*skaredy pohled*",
    [150] "*banik*",
    [151] "*kapky*",
    [152] ":o",
    [153] "*andel*",
    [154] "*kachnicka*",
    [155] "*lizatko*",
    [156] "*ostrov*",
    [157] "*blazne*",
    [158] "*obalka*",
    [159] "*kostka*",
    [160] "*satan*",
    [161] "*ROFL*",
    [162] ":D",
    [163] "*party*",
    [164] "*nevim*",
    [165] "*kytka*",
    [166] "*prvni pomoc*",
    [167] "*zavislak*",
    [168] "*papir*",
    [169] "*magor*",
    [170] "*call of duty*",
    [171] "*hovno*",
    [172] "*tocime*",
    [173] "*zalaskovany*",
    [174] "*co?*",
    [175] "*andel*",
    [176] "*supeer*",
    [177] "*zlomene srdce*",
    [178] "*jing & jang*",
    [179] "*prase*",
    [180] "8o",
    [181] "*zarizlej*",
    [182] "*cr*",
    [183] "*censored*",
    [184] "*kiss*",
    [185] "*mizim*",
    [186] "*icq*",
    [187] "*prd*",
    [188] "*na zdravi*",
    [189] "*stop*",
    [190] "*ctyrlistek*",
    [191] "*klaun*",
    [192] "*ovce*",
    [193] "*meda*",
    [194] "*chlastam*",
    [195] "*spermie*",
    [196] "*kvetinka*",
    [197] "*darek*",
    [198] "*tux*",
    [199] "*ham ham*",
    [200] "*nevinny*",
    [201] "*bloncka*",
    [202] "*kyklop*",
    [203] "*zeru te*",
    [204] "*hadka*",
    [205] "*pes*",
    [206] "%-/",
    [207] "*certik*",
    [208] "*ufon*",
    [209] "*letadlo*",
    [210] "*help*",
    [211] "*cyklista*",
    [212] "*trabi*",
    [213] "*nuda*",
    [214] "*mys*",
    [215] "*obejmuti*",
    [216] "*hlad*",
    [217] "*nota*",
    [218] "*pila*",
    [219] "*potlesk*",
    [220] "*windows*",
    [221] "*wrong way*",
    [222] "*spirala*",
    [223] "*cerv*",
    [224] "*$*",
    [225] "*smoula*",
    [226] "*srdicka*",
    [227] "*nova*",
    [228] "*pocitace*",
    [229] "*skejtak*",
    [230] "*(?)*",
    [231] "*krava*",
    [232] "*kenny*",
    [233] "*quake3*",
    [234] "*kytka*",
    [235] "*prosim*",
    [236] "*chameleon*",
    [237] "*slovensko*",
    [238] "*worm*",
    [239] "*jahoda*",
    [240] "*music*",
    [241] "*jablko*",
    [242] "*tresne*",
    [243] "*cumacek*",
    [244] "*ryba*",
    [245] "*pes*",
    [246] "*lebka*",
    [247] "*polib mi*",
    [248] "*playboy*",
    [249] "*pepsi*",
    [250] "*fish*",
    [251] "*firefox*",
    [252] "*muzika*",
    [253] "*vino*",
    [254] "*meda*",
    [255] "*ufff*",
    [256] "*myc*",
    [257] "*hlavou do zdi*",
    [258] "*pizza*",
    [259] "*zaba*",
    [260] "*hotovej*",
    [261] "*hehehe*",
    [262] "*stopar*",
    [263] "*msn*",
    [264] "*jedi*",
    [265] "*oci z dulku*",
    [266] "*cd*",
    [267] "*no smile*",
    [268] "*boze!*",
    [269] "*grrr*",
    [270] "*ne ne*",
    [271] "*zurim*",
    [272] "*darek*",
    [273] "*kuk*",
    [274] ":-}",
    [275] ":((",
    [276] ":-D",
    [277] "*help*",
    [278] "*strelec*",
    [279] "*snoopy*",
    [280] "*skype*",
    [281] "*nike*",
    [282] "*duch*",
    [283] "*blizenec*",
    [284] "*dlouhy jazyk*",
    [285] "*pich*",
    [286] "*prosim*",
    [287] "*plavec*",
    [288] "*drink*",
    [289] "*tasmansky cert*",
    [290] "*ooooo*",
    [291] "*rozkaz*",
    [292] "*kytara*",
    [293] "*dj*",
    [294] "*basketak*",
    [295] "*robot*",
    [296] "*britanie*",
    [297] "*usa*",
    [298] "*papam*",
    [299] "*Shrek*",
    [300] "*zelenac*",
    [301] "*malir*",
    [302] "*znak*",
    [303] "*loveletter*",
    [304] "*vanoce*",
    [305] "*cekam*",
    [306] "*lebka*",
    [307] "*pistole*",
    [308] "*kure*",
    [309] "*shorty\'s*",
    [310] "*hory*",
    [311] "*motorka*",
    [312] "*mobil*",
    [313] "*cigareta*",
    [314] "*snek*",
    [315] "*TV*",
    [316] "*winamp*",
    [317] "*prosiim*",
    [318] "*ufo*",
    [319] "*evil*",
    [320] "*->*",
    [321] "*slon*",
    [322] "*miranda*",
    [323] "*houslista*",
    [324] "*tancujici*",
    [325] "*malo mista*",
    [326] "*oko*",
    [327] "*spirala*",
    [328] "*ryby*",
    [329] "*hadka*",
    [330] "*german*",
    [331] "*kuk*",
    [332] "*telefon*",
    [333] "*CZ srdce*",
    [334] "*zzzz...*",
    [335] "*evileyes*",
    [336] "*kenny*",
    [337] "*maul*",
    [338] "*silak*",
    [339] "*zamilovane oci*",
    [340] "*beran*",
    [341] "*usmev*",
    [342] "*miluju te*",
    [343] "*pusu*",
    [344] "*kulikuli*",
    [345] "*super*",
    [346] "*zamilovany*",
    [347] "*krychle*",
    [348] "*laska*",
    [349] "*skoda*",
    [350] "*kozoroh*",
    [351] "%-/",
    [352] "*srdicka*",
    [353] "*domov*",
    [354] "*toust*",
    [355] "*zadek*",
    [356] "*lebka*",
    [357] "*opice*",
    [358] "*cd*",
    [359] "*yes*",
    [360] "*krychle*",
    [361] "*zamilovane oci*",
    [362] "*kukuc*",
    [363] "*no*",
    [364] "*laska*",
    [365] "*radioaktivita*",
    [366] "*elvis*",
    [367] "*andilek*",
    [368] "*cert.zena*",
    [369] "*omdlim*",
    [370] "*cert.muz*",
    [371] "*YS*",
    [372] "*kniha*",
    [373] "*RS*",
    [374] "*kun*",
    [375] "*nova*",
    [376] "*maul*",
    [377] "*bleee*",
    [378] "*cvoku*",
    [379] "*alien*",
    [380] "*majacek*",
    [381] "*red dwarf*",
    [382] "*drink*",
    [383] "*certik*",
    [384] "*?*",
    [385] "*cvok*",
    [386] "0-)",
    [387] "*stir*",
    [388] "*casper*",
    [389] "*velke oci*",
    [390] "*joint*",
    [391] "*BS*",
    [392] "*stydlin*",
    [393] "*vahy*",
    [394] "*cumim*",
    [395] "*lev*",
    [396] "*mlcim*",
    [397] "*brucoun*",
    [398] "*GS*",
    [399] "*pohodicka*",
    [400] "*slon*",
    [401] "*VIP*",
    [402] "*PC crash*",
    [403] "*haha*",
    [404] "*amerika*",
    [405] "*omg*",
    [406] "*slint*",
    [407] "*tabletka*",
    [408] "*zamerovac*",
    [409] "*bublina*",
    [410] "*strom*",
    [411] "*bublina*",
    [412] "8-)",
    [413] ";-D",
    [414] "*vetrak*",
    [415] "*lol*",
    [416] ">-(",
    [417] "*vodnar*",
    [418] "X-|",
    [419] ":-)",
    [420] "*pes*",
    [421] "*jejky*",
    [422] "*playboy*",
    [423] "^-)",
    [424] "*akta x*",
    [425] "*apu*",
    [426] "*jednovokej*",
    [427] "0-D",
    [428] ":-<",
    [429] "*IE*",
    [430] "*srdce*",
    [431] ":-)",
    [432] "*apple*",
    [433] "*notes*",
    [434] "*prase*",
    [435] "*lebka*",
    [436] ":-(",
    [437] ";-)",
    [438] "*dabel*",
    [439] "*nastvany*",
    [440] "*nastvany*",
    [441] "*pusa*",
    [442] "*pavouk*",
    [443] "*krokodyl*",
    [444] "*smutnej*",
    [445] "*madarko*",
    [446] "*mava*",
    [447] "*hehehe*",
    [448] "*pavoucek*",
    [449] "*tresne*",
    [450] "*blabla*",
    [451] "*letadlo*",
    [452] "*beruska*",
    [453] "*cvok*",
    [454] "*k prasknuti*",
    [455] "*bomba*",
    [456] "*zaba*",
    [457] "*premyslim*",
    [458] "*zaba*",
    [459] "*spendlik*",
    [460] "*kuzle*",
    [461] "*lebka*",
    [462] ":-D",
    [463] "*svicka*",
    [464] "*vidim vas*",
    [465] "*neverim*",
    [466] ";-)",
    [467] "*hehe*",
    [468] "*jeee*",
    [469] "*kladivko*",
    [470] "*brusle*",
    [471] "*jazycek*",
    [472] "*klavesy*",
    [473] "*RIP*",
    [474] "*slepa baba*",
    [475] "*sova*",
    [476] "*hulic*",
    [477] "*peace*",
    [478] "*lol*",
    [479] "*bulharsko*",
    [480] "*smisek*",
    [481] "*juu*",
    [482] "*pohoda*",
    [483] "*nemecko*",
    [484] "*dansko*",
    [485] "*raketa*",
    [486] "*cinan*",
    [487] ":p",
    [488] "*nastvany*",
    [489] "*kyta*",
    [490] "*britanie*",
    [491] "*boj*",
    [492] "*hmm*",
    [493] "*cervena se*",
    [494] "*kouli se*",
    [495] "*spanelsko*",
    [496] "*francie*",
    [497] "*horu dolu*",
    [498] "*to on*",
    [499] "*nastvany*",
    [500] "*zklamany*",
    [501] "*kuk*",
    [502] "*mrk*",
    [503] "*ninja*",
    [504] "*rezac*",
    [505] "*tiskarna*",
    [506] ":.(",
    [507] "*zombie*",
    [508] "*zelenej kuk*",
    [509] "*zvraci*",
    [510] "8-|",
    [511] "*ninja*",
    [512] "*recko*",
    [513] "*italie*",
    [514] ":-$",
    [515] "*znacka*",
    [516] ":-{",
    [517] "*mobil*",
    [518] "*Rx*",
    [519] "*ukecanej*",
    [520] "*propichlej sipem*",
    [521] "*deleni*",
    [522] ":-\\",
    [523] "*CS*",
    [524] "*blabla*",
    [525] "*upir*",
    [526] "*OK*",
    [527] "*gta*",
    [528] "*polsko*",
    [529] "*turecko*",
    [530] "*spatnej dech*",
    [531] "*love*",
    [532] "*student*",
    [533] "*japonsko*",
    [534] "*flekatej :D*",
    [535] "*ozrala*",
    [536] ":-)",
    [537] "8-)",
    [538] ":-**",
    [539] "*ach jo*",
    [540] "*zaba*",
    [541] "*pizza*",
    [542] "*zmlaceny*",
    [543] "*chlastam*",
    [544] "*zmrzlina*",
    [545] "*darek*",
    [546] "*dort*",
    [547] "*hot dog*",
    [548] ":DD",
    [549] "*pikachu*",
    [550] ":\')",
    [551] "*klaun*",
    [552] "*spion*",
    [553] "*blee*",
    [554] "^_^",
    [555] "XD",
    [556] "^D",
    [557] "*rozpacity*",
    [558] "*1. pusa*",
    [559] "*hihi*",
    [560] ";-D",
    [561] "*kde jsi*",
    [562] "*tanec*",
    [563] "*odchazim*",
    [564] ">:-(",
    [565] "8-D",
    [566] "*oboci*",
    [567] ":-)",
    [568] ":p",
    [569] "*dansko*",
    [570] "*ziv*",
    [571] "*piisk*",
    [572] "*naraz*",
    [573] ":-)",
    [574] "*hc vsetin*",
    [575] "*andel*",
    [576] "*dabel*",
    [577] "*laska*",
    [578] "*paranoidni*",
    [579] "*salute*",
    [580] "*sarkasticky*",
    [581] "*darebaci*",
    [582] "*silak*",
    [583] "*kuli oci*",
    [584] "*haha*",
    [585] ":-)",
    [586] "*z5*",
    [587] ":-)",
    [588] "*oslava*",
    [589] "*zzZZ*",
    [590] "*cernobily*",
    [591] ".-)",
    [592] ":-|",
    [593] ":-((",
    [594] "*stribny usmev*",
    [595] "*kytara*",
    [596] ":-/",
    [597] "*cervena se*",
    [598] "*alien*",
    [599] "*georgia*",
    [600] "*jablko*",
    [601] "*dabelsky smich*",
    [602] "*snek*",
    [603] "*srdce*",
    [604] "*kurba*",
    [605] "8(",
    [606] "*kejvani hlavou*",
    [607] "*arakain*",
    [608] "*jen pojd*",
    [609] "*srdce*",
    [610] "*haha*",
    [611] "*andilek*",
    [612] "*ach jo*",
    [613] "*omraceny*",
    [614] "*neviditelny*",
    [615] "*eh*",
    [616] "*fousac*",
    [617] "*pes*",
    [618] "*auto*",
    [619] "*bmw*",
    [620] "*sluchatka*",
    [621] "*brej den*",
    [622] "*vypadenej zub*",
    [623] "*mnam*",
    [624] "*chat*",
    [625] "*mic*",
    [626] "*jeje*",
    [627] "*to snad ne*",
    [628] "*hruska*",
    [629] "*potapec*",
    [630] "*smutny*",
    [631] ":D",
    [632] "*rak*",
    [633] "*[A]*",
    [634] "*vodnar*",
    [635] "*beran*",
    [636] ":-(",
    [637] "*pero*",
    [638] "*micek*",
    [639] "*flekatej ;)*",
    [640] "*lebka*",
    [641] "*drzim palec*",
    [642] "*kyle*",
    [643] "*nevim*",
    [644] "*vcela*",
    [645] "*nechci*",
    [646] "*beruska*",
    [647] "*smoking*",
    [648] "*posta*",
    [649] "*nekourit*",
    [650] "*zranice*",
    [651] "*ruzovej*",
    [652] "*kvetina*",
    [653] "*monokl*",
    [654] "*letadlo*",
    [655] "*cinzano*",
    [656] "*ruka V*",
    [657] "*lebka*",
    [658] "*odpocet*",
    [659] "*klic*",
    [660] "*myska*",
    [661] "*zhulenej*",
    [662] "*srdicka*",
    [663] "*prasatko*",
    [664] "*zmateny*",
    [665] "*juuu*",
    [666] "*ach ne*",
    [667] "*papa*",
    [668] "*policajt*",
    [669] "*ksiltovka*",
    [670] "*strom*",
    [671] "*letadlo*",
    [672] "*ruze*",
    [673] "*tak co?*",
    [674] "*tcha*",
    [675] "*vysmata smrtka*",
    [676] "*hihi, trapny*",
    [677] "*demon*",
    [678] "*problem?*",
    [679] "*chjo*",
    [680] "*zurici*",
    [681] "*hec*",
    [682] "*zamilovany*",
    [683] ":-|",
    [684] "*lyzovani*",
    [685] "*jahoda*",
    [686] "*zaba*",
    [687] "*prsten*",
    [688] "*citron*",
    [689] "*pozor*",
    [690] "*zvraci*",
    [691] ":-*",
    [692] ":D",
    [693] "*televize*",
    [694] "*plakajici*",
    [695] "*korunka*",
    [696] "*muchomurka*",
    [697] ":-(",
    [698] "*chicht*",
    [699] "*cokl*",
    [700] "*muheh*",
    [701] "*dudlik*",
    [702] "*ty si*",
    [703] "*zubatej*",
    [704] ">:-(",
    [705] "*rocker*",
    [706] "*mnami*",
    [707] "*tuc tuc*",
    [708] "*nene*",
    [709] "*buch buch*",
    [710] "*stopy*",
    [711] "*papa*",
    [712] "*ja nic*",
    [713] ":-S",
    [714] "*trumpeta*",
    [715] "*ziva*",
    [716] "*promin*",
    [717] "*princezna*",
    [718] "*skejtak*",
    [719] "*bleee*",
    [720] ":-*",
    [721] "*hulic*",
    [722] ">:-P",
    [723] ";-(",
    [724] "*zmrzlej*",
    [725] "*klaun*",
    [726] "*zubejda*",
    [727] "*mrka*",
    [728] "*beran*",
    [729] "*jj*",
    [730] ":)",
    [731] ":-*",
    [732] ";-)",
    [733] ".-)",
    [734] ":)",
    [735] "=)",
    [736] ":-**",
    [737] "*kytara*",
    [738] "*laska*",
    [739] "*letadlo*",
    [740] "*sanitka*",
    [741] "*plakajici*",
    [742] ":-\\",
    [743] "*hruska*",
    [744] "*zere*",
    [745] "*hvezda*",
    [746] ":-(",
    [747] "*posila pusu*",
    [748] ">:-$",
    [749] ":-o",
    [750] ":-/",
    [751] ":)",
    [752] ">:-z",
    [753] "*mava*",
    [754] ":)",
    [755] "*lebka*",
    [756] "*tuli tuli*",
    [757] "*beran*",
    [758] "*jedu*",
    [759] "*laska*",
    [760] "*pistol*",
    [761] ":-|",
    [762] ":-|",
    [763] "*kvet*",
    [764] "*pac*",
    [765] "*meda*",
    [766] "*mnam*",
    [767] "*SMS*",
    [768] "*ping pong*",
    [769] "*bila kytka*",
    [770] ";-)",
    [771] ":-(",
    [772] "*ziva*",
    [773] "*cervena kytka*",
    [774] "8-)",
    [775] "*stopa*",
    [776] "*stydi se*",
    [777] "*fu*",
    [778] "*usina*",
    [779] "*X*",
    [780] "*banan*",
    [781] "*srdce*",
    [782] "*ksiltovka*",
    [783] "*palec nahoru*",
    [784] "*radioaktivni*",
    [785] "*muhehe*",
    [786] "*vidi 4x*",
    [787] "*palec dolu*",
    [788] "*$$ v ocich*",
    [789] "*letadlo*",
    [790] "*sibenice*",
    [791] "*palec nahoru*",
    [792] "*palec dolu*",
    [793] "*tudle nudle*",
    [794] "*divka*",
    [795] "*obalka*",
    [796] "*medvidek*",
    [797] "*kyticka*",
    [798] "*zakazano*",
    [799] "*Svedsko*",
    [800] "*sachy*",
    [801] "*joystick*",
    [802] "*gramofon*",
    [803] "*ptak zobe*",
    [804] "*mesic*",
    [805] "*zatazeno*",
    [806] "*divka*",
    [807] "*ty ty ty!*",
    [808] "*kobliha*",
    [809] "*pocitace*",
    [810] "*Keny*",
    [811] "*juuu*",
    [812] "*hranolky*",
    [813] "*bonbon*",
    [814] "*hulic*",
    [815] "*znudenej*",
    [816] "*skakajici kure*",
    [817] "O_o",
    [818] "*hehe*",
    [819] "*slunicko*",
    [820] "*vyjevenej*",
    [821] "*prohlizec Opera*",
    [822] ":))",
    [823] "*barevnej :)*",
    [824] ":D",
    [825] "*brejloun*",
    [826] "*beran*",
    [827] "*zvracim*",
    [828] "*dest*",
    [829] "*velky zuby*",
    [830] "*nagelovanej dement*",
    [831] "*traktor*",
    [832] "*lebka*",
    [833] "*bubak*",
    [834] ":-*",
    [835] "*demon*",
    [836] "*ano*",
    [837] ":-P",
    [838] "*s cepickou*",
    [839] "*nene*",
    [840] "*kralicek*",
    [841] "*chci pusu*",
    [842] "*logo Etnies*",
    [843] "*vyplazenej jazyk*",
    [844] "*sonar*",
    [845] "*zamilovany*",
    [846] "*mikrofon*",
    [847] "*ses no!*",
    [848] "*tancici*",
    [849] "*popelnice*",
    [850] "*klaun*",
    [851] "*destnik*",
    [852] "*fialka*",
    [853] "*work*",
    [854] "*srdce-sip*",
    [855] "*papa*",
    [856] ":)",
    [857] "*A*",
    [858] ":D",
    [859] "*ruze*",
    [860] "*kis kis*",
    [861] "*tak co?*",
    [862] "*vybuch*",
    [863] "*stridani*",
    [864] "*cernoch*",
    [865] "*stop*",
    [866] ":))",
    [867] "*zakaz zastaveni*",
    [868] "*dynamit*",
    [869] "*HA HA*",
    [870] "*slepy usmev*",
    [871] "*ajo!*",
    [872] "*peace*",
    [873] "*pinokio*",
    [874] ":/",
    [875] ":P",
    [876] ":((",
    [877] ":-s",
    [878] "*nevolnost*",
    [879] ":-|",
    [880] "*propichnuti sipem*",
    [881] "*hvezdicky*",
    [882] ":\'(",
    [883] "*fnuk*",
    [884] "*omg*",
    [885] "*depka*",
    [886] ":DD",
    [887] "*:) :P*",
    [888] "*velkej nos*",
    [889] "*znechucen*",
    [890] "*blondynka*",
    [891] "*prase*",
    [892] ":(",
    [893] ":-X",
    [894] "*pssst*",
    [895] "*:D :)*",
    [896] "*lizani zadku*",
    [897] ">:-z",
    [898] "*kral pirat*",
    [899] "*nevolnost*",
    [900] "*brunetka*",
    [901] "8)",
    [902] "*pusa*",
    [903] "*spim*",
    [904] "*zzZZ*",
    [905] "*spatny signal*",
    [906] "*zelena vlajka*",
    [907] "*zrzka*",
    [908] "*zamilovany dopis*",
    [909] "*blah*",
    [910] "*kyle*",
    [911] "*olympiada*",
    [912] "*samopal*",
    [913] "*boxer*",
    [914] "*bezim*",
    [915] "*fnuka*",
    [916] "*ofacovanej*",
    [917] "*bleje*",
    [918] "*kocicka*",
    [919] "*urazenej*",
    [920] "*znudeny*",
    [921] "*zelenac*",
    [922] "*milka*",
    [923] "*rohlik*",
    [924] "*hmm*",
    [925] ":-|",
    [926] "*piska si*",
    [927] "*noty*",
    [928] ":((",
    [929] ":\'(",
    [930] "*psst*",
    [931] "*ospaly*",
    [932] "*wmp*",
    [933] "*paleta*",
    [934] ":((",
    [935] "*word*",
    [936] "*msn*",
    [937] "*totalcmd*",
    [938] "*dokument*",
    [939] "*Lisa Simpson*",
    [940] "*slunicko*",
    [941] "*banan*",
    [942] "*kostka*",
    [943] "*souhlas*",
    [944] "*Darth Vader*",
    [945] "*klic*",
    [946] "*kriz*",
    [947] "*zamek*",
    [948] "*kouli ocima*",
    [949] "*krtek*",
    [950] "*ruzovy panter*",
    [951] "*brejloun*",
    [952] "*zurim*",
    [953] "*krev z oci*",
    [954] "*prase*",
    [955] "*asi praskne*",
    [956] "*andilek*",
    [957] ":-|",
    [958] "*ham*",
    [959] "*haha*",
    [960] "*mizejici drzka*",
    [961] "*dabel*",
    [962] ":-PP",
    [963] "*Slavia*",
    [964] "*hvezda*",
    [965] "*tucnak*",
    [966] "*auto*",
    [967] ">:-(",
    [968] "*dabel*",
    [969] "*mimi*",
    [970] "*ospala*",
    [971] "*kocka*",
    [972] "*sova*",
    [973] "*mafian*",
    [974] "*kutalejici se*",
    [975] "*rozhodne NE!*",
    [976] "*rozhodne ANO!*",
    [977] "*srdce*",
    [978] "*auto*",
    [979] "*na disketu*",
    [980] "*s pistalkou*",
    [981] "*derbi*",
    [982] "*^, ^*",
    [983] "*srdce*",
    [984] "*lokomotiva*",
    [985] "*pomrkavajici*",
    [986] "*xchat*",
    [987] "*netopyr*",
    [988] "*maskovany*",
    [989] "*slepy*",
    [990] "*slunce*",
    [991] "*krava*",
    [992] "*yes*",
    [993] "*opicka*",
    [994] "*prichazi*",
    [995] "*prase*",
    [996] "*coze???*",
    [997] "*coze???*",
    [998] ":D",
    [999] "8)",
    [1000] "8)",
    [1001] "*ratatata*",
    [1002] "O=",
    [1003] "*bomba*",
    [1004] "*kutalejici se*",
    [1005] ":DD",
    [1006] "8((",
    [1007] "8I",
    [1008] "8))",
    [1009] "*to rozhodne!*",
    [1010] "8((",
    [1011] "*bojim*",
    [1012] "*ziiiiv*",
    [1013] "*alkac 8-D*",
    [1014] "*kasparek*",
    [1015] "*blabla*",
    [1016] "*duhovej :)*",
    [1017] "8))",
    [1018] "^,^",
    [1019] "*kuk*",
    [1020] "*hiphop man*",
    [1021] "*kondom*",
    [1022] ":D",
    [1023] "):E",
    [1024] "[:P]",
    [1025] "[:D]",
    [1026] "[:DD]",
    [1027] "*dyne*",
    [1028] "[mimi]",
    [1029] "[;.(]",
    [1030] "[8)]",
    [1031] "[:((]",
    [1032] "[X-I]",
    [1033] "[8-I]",
    [1034] "[8(]",
    [1035] "8((",
    [1036] "*fuck off*",
    [1037] "*hodneeej*",
    [1038] ":)",
    [1039] "*ano :)*",
    [1040] "*sipka dolu*",
    [1041] "X-I",
    [1042] "X-D",
    [1043] "*slunicko*",
    [1044] "*strom*",
    [1045] "*meloun*",
    [1046] ";-I",
    [1047] "*king*",
    [1048] "*love!*",
    [1049] "):D",
    [1050] "*namysleny*",
    [1051] "*duhovej :)*",
    [1052] "*cyclop*",
    [1053] "*nesmelej*",
    [1054] "8-I",
    [1055] "*kafe*",
    [1056] "8))",
    [1057] "*letajici muska*",
    [1058] "*smutny*",
    [1059] ":-*",
    [1060] "8-0",
    [1061] "8-I",
    [1062] "*hodne place*",
    [1063] "X-((",
    [1064] "*rude oko*",
    [1065] "*ehm..ne*",
    [1066] "*ROFL*",
    [1067] "8-/",
    [1068] "*Thunderbird*",
    [1069] "*snek*",
    [1070] "*zelva*",
    [1071] "*martan*",
    [1072] "*Maxthon*",
    [1073] "*zakaz*",
    [1074] "*sparta :D*",
    [1075] ";-/",
    [1076] "*presipaci hodiny*",
    [1077] "*zobe*",
    [1078] ":-P",
    [1079] "*ctyrlistek*",
    [1080] "8-O",
    [1081] ":-)",
    [1082] ":-((",
    [1083] "):[",
    [1084] ":-D",
    [1085] "d:D",
    [1086] "*zubatej*",
    [1087] "*pi*",
    [1088] "*bomba*",
    [1089] "*zakaz*",
    [1090] "*myska*",
    [1091] "*krecek*",
    [1092] "*kralik*",
    [1093] "*skakajici*",
    [1094] ":)(",
    [1095] "*s dudlikem*",
    [1096] "*jednoocko*",
    [1097] "*piska si*",
    [1098] "*had*",
    [1099] ":�(",
    [1100] "*souhlasi*",
    [1101] "*nee-e*",
    [1102] "*hambac*",
    [1103] "*kriz*",
    [1104] "*jamaica*",
    [1105] "*apple*",
    [1106] "*jahudka*",
    [1107] "*kohout*",
    [1108] "*foto*",
    [1109] "*finsko*",
    [1110] "*bublina*",
    [1111] "*had*",
    [1112] "*kun*",
    [1113] "*ovce*",
    [1114] "*rozciluje se*",
    [1115] "*windows*",
    [1116] "*piskvorky*",
    [1117] "*polibek*",
    [1118] "*terminator*",
    [1119] "*AVG*",
    [1120] "*zizala*",
    [1121] "*krokodyl*",
    [1122] "*pistole*",
    [1123] "*duch*",
    [1124] "*pyramida*",
    [1125] ":(((",
    [1126] "://",
    [1127] "*juuuj*",
    [1128] "*notak*",
    [1129] "*king*",
    [1130] "*ninja*",
    [1131] "*!!!*",
    [1132] "*rybka*",
    [1133] "*bus*",
    [1134] ":)",
    [1135] "*stars*",
    [1136] "*kytka*",
    [1137] "*hatmatilka*",
    [1138] "*srdicka*",
    [1139] "*tesco*",
    [1140] "*chobotnice*",
    [1141] "*WC*",
    [1142] "*hlavou do zdi*",
    [1143] ":-D",
    [1144] "*hatmatilka*",
    [1145] "*hatmatilka*",
    [1146] "*hatmatilka*",
    [1147] "*erb*",
    [1148] "*erb*",
    [1149] "*erb*",
    [1150] "*erb*",
    [1151] "*erb*",
    [1152] "*erb*",
    [1153] "*erb*",
    [1154] "*dymka*",
    [1155] ":-D",
    [1156] "*oslava*",
    [1157] ":-j",
    [1158] "8-/",
    [1159] "8-)",
    [1160] "*srdce*",
    [1161] "*text*",
    [1162] "8))",
    [1163] "*liska*",
    [1164] "*toaletak*",
    [1165] "*kopretina*",
    [1166] "):D",
    [1167] ">:D",
    [1168] "*metro*",
    [1169] "8-/",
    [1170] ":-E",
    [1171] "*had*",
    [1172] "*mozek?*",
    [1173] "*mrk*",
    [1174] "*andel*",
    [1175] "*nevidim*",
    [1176] "*potlesk*",
    [1177] "8-E",
    [1178] ">8-/",
    [1179] "*kytka :)*",
    [1180] "*lebka breci*",
    [1181] "*omg*",
    [1182] "*srdce+sip*",
    [1183] "8-)",
    [1184] "*oboci :)*",
    [1185] "*skoda*",
    [1186] "*vodarna*",
    [1187] "*ohen*",
    [1188] "*mimino*",
    [1189] "*kiss*",
    [1190] "*psycho*",
    [1191] "8-.",
    [1192] "*bublinky*",
    [1193] "*sparta*",
    [1194] ":-/",
    [1195] "*zelenej kralik*",
    [1196] "*ne 8-((*",
    [1197] "*pes*",
    [1198] "*krava*",
    [1199] "*ufo*",
    [1200] "*meda*",
    [1201] ":\'((",
    [1202] "*indian*",
    [1203] "8-|",
    [1204] "*toaletak*",
    [1205] "*nene*",
    [1206] ":D",
    [1207] "*cert ne*",
    [1208] "*au*",
    [1209] "*hmm*",
    [1210] "*fuj*",
    [1211] "8)",
    [1212] ":D",
    [1213] ":-*",
    [1214] "*kun*",
    [1215] "*poklona*",
    [1216] ":-)",
    [1217] "*ptak*",
    [1218] ";))",
    [1219] "*snoopy*",
    [1220] ">:O",
    [1221] "*cr:)*",
    [1222] "*mrk*",
    [1223] "*rozhlizi*",
    [1224] "*bomba*",
    [1225] "*vodnice*",
    [1226] "8-|",
    [1227] "*rusko*",
    [1228] "*klaun*",
    [1229] "8))",
    [1230] "8-(",
    [1231] ">:|",
    [1232] "*?*",
    [1233] "*skener*",
    [1234] ":P",
    [1235] ":)",
    [1236] "*cr:)*",
    [1237] ">:D",
    [1238] ":/",
    [1239] ":D",
    [1240] "*ano*",
    [1241] "*ok*",
    [1242] "*svatba*",
    [1243] "*pes*",
    [1244] "*spi*",
    [1245] "*kytka*",
    [1246] "*kamosi*",
    [1247] "8D",
    [1248] "*vojak*",
    [1249] "8)",
    [1250] "*ufo*",
    [1251] ".)",
    [1252] "8(",
    [1253] "*psst*",
    [1254] ":D",
    [1255] "*ptak*",
    [1256] "*zena*",
    [1257] "*muz*",
    [1258] "*blesk*",
    [1259] "*granat*",
    [1260] "*snek*",
    [1261] "*kofola*",
    [1262] "*strom*",
    [1263] "*svicky*",
    [1264] ";))",
    [1265] "*nene*",
    [1266] ":E",
    [1267] "8E",
    [1268] "*santa*",
    [1269] "*pes*",
    [1270] "*nee*",
    [1271] ":P",
    [1272] "*usaty*",
    [1273] "*haha*",
    [1274] "*kocka*",
    [1275] "8))",
    [1276] "X|",
    [1277] "*srdce*",
    [1278] "8-E",
    [1279] "*hvezda*",
    [1280] "$))",
    [1281] "*brouk*",
    [1282] "*zarovka*",
    [1283] "*kafe*",
    [1284] "*dyne*",
    [1285] "*usa*",
    [1286] "*skace zelenej*",
    [1287] "*hasici*",
    [1288] "*hasici*",
    [1289] "*kapela*",
    [1290] "*vojaci*",
    [1291] "*tank*",
    [1292] "*zarovka*",
    [1293] "8-D",
    [1294] "*kolotoc*",
    [1295] "*oci*",
    [1296] "*zaba*",
    [1297] "*zvuk*",
    [1298] "*preclik*",
    [1299] ":D",
    [1300] "*houpacka*",
    [1301] "*houpacka*",
    [1302] "*policie*",
    [1303] "*hasici*",
    [1304] "*hasici*",
    [1305] "*hasici*",
    [1306] "*rybar*",
    [1307] ":D",
    [1308] "*polib mi*",
    [1309] "*ptak*",
    [1310] "*muz*",
    [1311] "*zena*",
    [1312] "*popelari*",
    [1313] "*snehulak*",
    [1314] "*krabice*",
    [1315] "8-E",
    [1316] "8-|",
    [1317] "*pochoden*",
    [1318] "*coko*",
    [1319] ":P",
    [1320] "*pluh*",
    [1321] ":(",
    [1322] "*pivko*",
    [1323] "*pistole*",
    [1324] ";))",
    [1325] "*cisterna*",
    [1326] "*hasici*",
    [1327] "*hasici*",
    [1328] "*hasici*",
    [1329] "*hasici*",
    [1330] "8-)",
    [1331] "8-o",
    [1332] ":D",
    [1333] "*nota*",
    [1334] "*sklenka*",
    [1335] ":/",
    [1336] ":))",
    [1337] "*milenci*",
    [1338] "*s bicem*",
    [1339] "*jin-jang*",
    [1340] "*bomba*",
    [1341] "*:P pusa*",
    [1342] ":-o",
    [1343] "*septa*",
    [1344] "*strili*",
    [1345] "*kos*",
    [1346] ":-|",
    [1347] "*ano*",
    [1348] "8-|",
    [1349] ":(",
    [1350] "*wtf?*",
    [1351] "*vana*",
    [1352] "*wc*",
    [1353] "8-X",
    [1354] "X-D",
    [1355] "$$-o",
    [1356] "*bus*",
    [1357] "8-E",
    [1358] ">:)",
    [1359] "*8) ano*",
    [1360] "*pribor*",
    [1361] "8-o",
    [1362] "*coze?*",
    [1363] "*potapec*",
    [1364] "*rofl*",
    [1365] "*AMD*",
    [1366] "*ubuntu*",
    [1367] "*dabel*",
    [1368] "*cert*",
    [1369] "X-D",
    [1370] "*co?*",
    [1371] "*toci se 8-|*",
    [1372] "*jejda*",
    [1373] "8-))",
    [1374] "*fousaty*",
    [1375] "*fousaty*",
    [1376] ";))",
    [1377] "8-)",
    [1378] ":-o",
    [1379] ">:(",
    [1380] ":)",
    [1381] "*papa*",
    [1382] "*lama*",
    [1383] ">8-)",
    [1384] "*zhulenej*",
    [1385] "*klaun*",
    [1386] "*sip srdce*",
    [1387] "*oboci :)*",
    [1388] ">:(",
    [1389] "*prase*",
    [1390] "8-/",
    [1391] ">8-)",
    [1392] "*lebka*",
    [1393] "*rozhlizi se :O*",
    [1394] "*pohreb*",
    [1395] "*viking*",
    [1396] ":-S",
    [1397] "*bublina srdce*",
    [1398] "*tweety*",
    [1399] ":D",
    [1400] "8-)",
    [1401] "8-|",
    [1402] "*krecek*",
    [1403] "8-.",
    [1404] "*?*",
    [1405] "*holka*",
    [1406] "*kluk*",
    [1407] ";)",
    [1408] "*dement*",
    [1409] ":-*",
    [1410] ":P",
    [1411] "*srdce*",
    [1412] "*zahlizi*",
    [1413] "*certik*",
    [1414] "*ano*",
    [1415] "X-)",
    [1416] "*puk :)*",
    [1417] ":-)",
    [1418] "*zmlaceny*",
    [1419] "*eifelovka*",
    [1420] "8-O",
    [1421] "*dabel*",
    [1422] "*iloveyou*",
    [1423] "*star*",
    [1424] "*packa*",
    [1425] "*sikana*",
    [1426] "*kotva*",
    [1427] "*medved*",
    [1428] "*tlacitko*",
    [1429] "*sipka :(*",
    [1430] "*kladivo*",
    [1431] "*jesterka*",
    [1432] "*magnet*",
    [1433] ":((",
    [1434] "*bic*",
    [1435] "*pesti do nosu*",
    [1436] "*kouri*",
    [1437] "*ufon*",
    [1438] "*strom*",
    [1439] ".-|",
    [1440] "*bonzak*",
    [1441] "*panda*",
    [1442] "*ji dort*",
    [1443] "*off topic*",
    [1444] "8-)",
    [1445] "*motyl*",
    [1446] "*mimino*",
    [1447] "*hokej*",
    [1448] "*srdce*",
    [1449] "*kulich :)*",
    [1450] ":-E",
    [1451] "*se sluchatky*",
    [1452] "*fiona*",
    [1453] "*bez zubu*",
    [1454] "*slinta*",
    [1455] "*box*",
    [1456] "*zubar*",
    [1457] "*liska*",
    [1458] "*ryba*",
    [1459] "*hrnek*",
    [1460] "*PLUS*",
    [1461] "8-|",
    [1462] "*trioky :|*",
    [1463] "*oko nene*",
    [1464] "*oko ano*",
    [1465] "*sni druheho*",
    [1466] "*ruze*",
    [1467] ":\'((",
    [1468] "*kafe*",
    [1469] "*blazne*",
    [1470] "8-/",
    [1471] "*kaktus*",
    [1472] "*Stan*",
    [1473] "*mec*",
    [1474] "*sekera*",
    [1475] "*mrk*",
    [1476] "*nastvany*",
    [1477] "8-|",
    [1478] "*ano*",
    [1479] "*brouk*",
    [1480] "8-D",
    [1481] "*strili*",
    [1482] "*had*",
    [1483] ".-)",
    [1484] "*mesic*",
    [1485] ":D",
    [1486] "*kytka*",
    [1487] "*andel/dabel*",
    [1488] "*zhulenec*",
    [1489] "8\'-((",
    [1490] "*srdicka*",
    [1491] ":-)",
    [1492] "*stopy*",
    [1493] ":-D",
    [1494] "*opel*",
    [1495] ":-P",
    [1496] "*vlajka*",
    [1497] ">:(",
    [1498] "*dudlik*",
    [1499] ";))",
    [1500] ":-P",
    [1501] ">:/",
    [1502] "*kos*",
    [1503] "*lebka*",
    [1504] "*bubak*",
    [1505] "*kuzelka*",
    [1506] ":-|",
    [1507] "*toci se*",
    [1508] "*blikaci*",
    [1509] ">:/",
    [1510] "*kytka*",
    [1511] "*sem no*",
    [1512] ":-P",
    [1513] ":\'((",
    [1514] "*spona*",
    [1515] "*tovarna*",
    [1516] "*motyl*",
    [1517] "*kulicka*",
    [1518] "*SG Chevron*",
    [1519] "*Pepsi*",
    [1520] "*CS*",
    [1521] "*znak HC*",
    [1522] "*kytka*",
    [1523] ":)",
    [1524] ":|",
    [1525] "*certik*",
    [1526] "*budik*",
    [1527] "*grrr*",
    [1528] ":) :(",
    [1529] ">:D",
    [1530] "*kun*",
    [1531] "8-o",
    [1532] "*sysel*",
    [1533] "8))",
    [1534] "*rozhlizi :/*",
    [1535] "*Japanka*",
    [1536] "*Sparta*",
    [1537] "*formule*",
    [1538] "*Intel inside*",
    [1539] "*ryba*",
    [1540] ":DD",
    [1541] "*cervici*",
    [1542] "*nota*",
    [1543] ":-|",
    [1544] "*COD2*",
    [1545] "*COD*",
    [1546] "*slinta*",
    [1547] "*afromen*",
    [1548] ";-)",
    [1549] "*zzZZ*",
    [1550] "*svalovec*",
    [1551] "*v uvozovkach*",
    [1552] "*s flaskou*",
    [1553] "|-8",
    [1554] "*pije*",
    [1555] "*unaveny*",
    [1556] "*pivo*",
    [1557] "*motorka*",
    [1558] "*s modrinou*",
    [1559] "$$-)",
    [1560] "X-P",
    [1561] "*brk...*",
    [1562] "*kocka*",
    [1563] ">:-I",
    [1564] "*princezna*",
    [1565] "*zvraci*",
    [1566] "=}",
    [1567] "*(_._)*",
    [1568] "*zamilovane oci*",
    [1569] "8-I",
    [1570] ":-P",
    [1571] "8-0",
    [1572] "8-I",
    [1573] "*had*",
    [1574] ":-)",
    [1575] "*pivo*",
    [1576] "*darce krve*",
    [1577] "8-S",
    [1578] ">=]",
    [1579] "*lebka*",
    [1580] ">:))",
    [1581] "*s lizatkem*",
    [1582] "*dostanes!*",
    [1583] ":-D",
    [1584] ":P",
    [1585] "*kacenka*",
    [1586] ":-P",
    [1587] ">8-I",
    [1588] "*Kanada*",
    [1589] "*Cr*",
    [1590] "*Finsko*",
    [1591] "*Italie*",
    [1592] "*Rakousko*",
    [1593] "*Nemecko*",
    [1594] "*Rusko*",
    [1595] "*Slovensko*",
    [1596] "*Svedsko*",
    [1597] "*Svycarsko*",
    [1598] "*Kazachstan*",
    [1599] "*Amerika*",
    [1600] "8-I",
    [1601] "*pukle srdce*",
    [1602] ":-*",
    [1603] "*letajici muska*",
    [1604] "8-I",
    [1605] "*odpal!*",
    [1606] ";-)",
    [1607] "*nasloucham*",
    [1608] "*Ferda mravenec*",
    [1609] "*kutalejici se*",
    [1610] "*BSD*",
    [1611] "*duhovej :)*",
    [1612] ":-)",
    [1613] "*peace*",
    [1614] ":-/",
    [1615] "*kvetina*",
    [1616] "*sasek*",
    [1617] "*jamaica :)*",
    [1618] "*bubinek*",
    [1619] "8o(",
    [1620] ":o)",
    [1621] "*slunce*",
    [1622] "*nota*",
    [1623] "*kvetina*",
    [1624] "*Finsko ;)*",
    [1625] "*love you*",
};

/**
 * \brief Number of smiles in the #smiles table.
 */
const int smiles_count = sizeof(smiles)/sizeof(*smiles);
