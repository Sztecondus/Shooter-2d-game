#include "Lever.h"
#include "GameFunctions.h"
#include "link.h"

Lever::Lever(void)
{
	this->bitmap="lever";
	this->object_name="lever";
	this->state=OFF;
}


Lever::~Lever(void)
{
}

void Lever::apply_new_state(int with_key)
{
	if(with_key==button_to_interact_with)
	{
		if(state==ON)
			state=OFF;
		if(state==OFF)
			state=ON;

		Interactive_object::send_state();
	}
}		