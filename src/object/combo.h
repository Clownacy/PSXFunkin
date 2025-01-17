#ifndef _COMBO_H
#define _COMBO_H

#include "../object.h"
#include "../stage.h"

//Combo object structure
typedef struct
{
	//Object base structure
	Object obj;
	
	//Combo state
	u8 hit_type; //SICK, GOOD, BAD, SHIT
	
	fixed_t x;
	
	fixed_t hy, hv; //Hit type
	fixed_t ht;
	
	fixed_t cy, cv; //COMBO
	fixed_t ct;
	
	u8 num[5]; //0-9
	fixed_t numy[5];
	fixed_t numv[5];
	fixed_t numt;
} Obj_Combo;

//Combo object functions
Obj_Combo *Obj_Combo_New(fixed_t x, fixed_t y, u8 hit_type, u16 combo);

#endif
