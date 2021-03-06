
#include "dtv_frequency.h"



const frequencys_t frequencys_England[]=
{

#if(MAPLE_TV_STANDAR == MAPLE_TV_DTMB)
	{ 52500 , 8000},
	{ 60500 , 8000},
	{ 68500 , 8000},
	{ 80000 , 8000},
	{ 88000 , 8000},
	{171000 , 8000},
	{179000 , 8000},
	{187000 , 8000},
	{195000 , 8000},
	{203000 , 8000},
	{211000 , 8000},
	{219000 , 8000},

	{474000,8000},
	{482000,8000},
	{490000,8000},
	{498000,8000},
	{506000,8000},
	{514000,8000},
	{522000,8000},
	{530000,8000},
	{538000,8000},
	{546000,8000},
	{554000,8000},
	{562000,8000},
	{610000,8000},
	{618000,8000},
	{626000,8000},
	{634000,8000},
	{642000,8000},
	{650000,8000},
	{658000,8000},
	{666000,8000},
	{674000,8000},
	{682000,8000},
	{690000,8000},
	{698000,8000},
	{706000,8000},
	{714000,8000},
	{722000,8000},
	{730000,8000},
	{738000,8000},
	{746000,8000},
	{754000,8000},
	{762000,8000},
	{770000,8000},
	{778000,8000},
	{786000,8000},
	{794000,8000},
	{802000,8000},
	{810000,8000},
	{818000,8000},
	{826000,8000},
	{834000,8000},
	{842000,8000},
	{850000,8000},
	{858000,8000}, 
    
#elif(MAPLE_TV_STANDAR == MAPLE_TV_DVB_T)
	{722000 , 8000},
    {730000 , 8000},
    {473000 , 6000},
    {479000 , 6000},
    {485000 , 6000},
    {491000 , 6000},
    {497000 , 6000},
    {503000 , 6000},
    {509000 , 6000},
    {515000 , 6000},
    {521000 , 6000},
    {527000 , 6000},
    {533000 , 6000},
    {539000 , 6000},
    {545000 , 6000},
    {551000 , 6000},
    {557000 , 6000},
    {563000 , 6000},     
    {569000 , 6000},    
	{575000 , 6000},
    {581000 , 6000},
    {587000 , 6000},
    {593000 , 6000},
    {599000 , 6000},
    {605000 , 6000},
    {611000 , 6000},
    {617000 , 6000},
    {623000 , 6000},
    {629000 , 6000},
    {635000 , 6000},
    {641000 , 6000},
    {647000 , 6000},
    {653000 , 6000},
    {659000 , 6000},
 	{665000 , 6000},
    {671000 , 6000},
    {677000 , 6000},
    {683000 , 6000},
    {689000 , 6000},
    {695000 , 6000},
    {701000 , 6000},
    {707000 , 6000},
    {713000 , 6000},
    {719000 , 6000},
    {725000 , 6000},
    {731000 , 6000},
    {737000 , 6000},
    {743000 , 6000},
    {749000 , 6000},
    {755000 , 6000},
    {761000 , 6000},
    {767000 , 6000},
    {773000 , 6000},
    {779000 , 6000},
    {785000 , 6000},
    {791000 , 6000},
    {797000 , 6000},
    {803000 , 6000},
#elif(MAPLE_TV_STANDAR == MAPLE_TV_ISDB_T)
    {473143 , 6000},
    {479143 , 6000},
    {485143 , 6000},
    {491143 , 6000},
    {497143 , 6000},
    {503143 , 6000},
    {509143 , 6000},
    {515143 , 6000},
    {521143 , 6000},
    {527143 , 6000},
    {533143 , 6000},
    {539143 , 6000},
    {545143 , 6000},
    {551143 , 6000},
    {557143 , 6000},
    {563143 , 6000},     
    {569143 , 6000},    
	{575143 , 6000},
    {581143 , 6000},
    {587143 , 6000},
    {593143 , 6000},
    {599143 , 6000},
    {605143 , 6000},
    {611143 , 6000},
    {617143 , 6000},
    {623143 , 6000},
    {629143 , 6000},
    {635143 , 6000},
    {641143 , 6000},
    {647143 , 6000},
    {653143 , 6000},
    {659143 , 6000},
    {665143 , 6000},
    {671143 , 6000},
    {677143 , 6000},
    {683143 , 6000},
    {689143 , 6000},
    {695143 , 6000},
    {701143 , 6000},
    {707143 , 6000},
    {713143 , 6000},
    {719143 , 6000},
    {725143 , 6000},
    {731143 , 6000},
    {737143 , 6000},
    {743143 , 6000},
    {749143 , 6000},
    {755143 , 6000},
    {761143 , 6000},
    {767143 , 6000},
    {773143 , 6000},
    {779143 , 6000},
    {785143 , 6000},
    {791143 , 6000},
    {797143 , 6000},
    {803143 , 6000},
#endif
};



const frequencys_t frequencys_China[]=
{
#if(MAPLE_TV_STANDAR == MAPLE_TV_DTMB)
	{474000,8000},
	{482000,8000},
	{490000,8000},
	{498000,8000},
	{506000,8000},
	{514000,8000},
	{522000,8000},
	{530000,8000},
	{538000,8000},
	{546000,8000},
	{554000,8000},
	{562000,8000},
	{610000,8000},
	{618000,8000},
	{626000,8000},
	{634000,8000},
	{642000,8000},
	{650000,8000},
	{658000,8000},
	{666000,8000},
	{674000,8000},
	{682000,8000},
	{690000,8000},
	{698000,8000},
	{706000,8000},
	{714000,8000},
	{722000,8000},
	{730000,8000},
	{738000,8000},
	{746000,8000},
	{754000,8000},
	{762000,8000},
	{770000,8000},
	{778000,8000},
	{786000,8000},
	{794000,8000},
	{802000,8000},
	{810000,8000},
	{818000,8000},
	{826000,8000},
	{834000,8000},
	{842000,8000},
	{850000,8000},
	{858000,8000}, 

#elif(MAPLE_TV_STANDAR == MAPLE_TV_DVB_T)
	{474000,8000},
	{482000,8000},
    {490000,8000},
    {498000,8000},
    {506000,8000},
    {514000,8000},
    {522000,8000},
    {530000,8000},
    {538000,8000},
    {546000,8000},
    {554000,8000},
    {562000,8000},
    {570000,8000},
    {578000,8000},
    {586000,8000},
    {594000,8000},
    {602000,8000},
    {610000,8000},
    {618000,8000},
    {626000,8000},
    {634000,8000},
    {642000,8000},
    {650000,8000},
    {658000,8000},
    {666000,8000},
    {674000,8000},
    {682000,8000},
    {690000,8000},
    {698000,8000},
    {706000,8000},
    {714000,8000},
    {722000,8000},
    {730000,8000},
    {738000,8000},
    {746000,8000},
    {754000,8000},
    {762000,8000},
    {770000,8000},
    {778000,8000},
    {786000,8000},
    {794000,8000},
    {802000,8000},
    {810000,8000},
    {818000,8000},
    {826000,8000},
    {834000,8000},
    {842000,8000},
    {850000,8000},
    {858000,8000}, 
    {866000,8000}, 
#elif(MAPLE_TV_STANDAR == MAPLE_TV_ISDB_T)
    {473143 , 6000},
    {479143 , 6000},
    {485143 , 6000},
    {491143 , 6000},
    {497143 , 6000},
    {503143 , 6000},
    {509143 , 6000},
    {515143 , 6000},
    {521143 , 6000},
    {527143 , 6000},
    {533143 , 6000},
    {539143 , 6000},
    {545143 , 6000},
    {551143 , 6000},
    {557143 , 6000},
    {563143 , 6000},     
    {569143 , 6000},    
	{575143 , 6000},
    {581143 , 6000},
    {587143 , 6000},
    {593143 , 6000},
    {599143 , 6000},
    {605143 , 6000},
    {611143 , 6000},
    {617143 , 6000},
    {623143 , 6000},
    {629143 , 6000},
    {635143 , 6000},
    {641143 , 6000},
    {647143 , 6000},
    {653143 , 6000},
    {659143 , 6000},
    {665143 , 6000},
    {671143 , 6000},
    {677143 , 6000},
    {683143 , 6000},
    {689143 , 6000},
    {695143 , 6000},
    {701143 , 6000},
    {707143 , 6000},
    {713143 , 6000},
    {719143 , 6000},
    {725143 , 6000},
    {731143 , 6000},
    {737143 , 6000},
    {743143 , 6000},
    {749143 , 6000},
    {755143 , 6000},
    {761143 , 6000},
    {767143 , 6000},
    {773143 , 6000},
    {779143 , 6000},
    {785143 , 6000},
    {791143 , 6000},
    {797143 , 6000},
    {803143 , 6000},
#endif
};




area_frequencys_t area_frequencys_table[2] ={
	
	{0,frequencys_China,sizeof(frequencys_China)/sizeof(frequencys_t),"CHN"}, 
	{0,frequencys_England,sizeof(frequencys_England)/sizeof(frequencys_t),"GBR"},    
    
};

