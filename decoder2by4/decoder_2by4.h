/*
 * decoder_2by4.h
 *
 *  Created on: May 23, 2018
 *      Author: ruth ndunge
 */

#ifndef DECODER_1BY2_H_
#define DECODER_1BY2_H_
#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
sc_in<bool> a,b;
sc_out<bool> c,d,e,f;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<a;
	sensitive<<b;
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
	c=(a==0 && b==0)?1:0;
	d=(a==1 && b==0)?1:0;
	e=(a==0 && b==1)?1:0;
	f=(a==1 && b==1)?1:0;
}
};

#endif /* DECODER_2BY4_H_ */
