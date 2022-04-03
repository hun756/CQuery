"use strict";
/*Compiled using Cheerp (R) by Leaning Technologies Ltd*/
var __imul=Math.imul;
var __fround=Math.fround;
var oSlot=0;var nullArray=[null];var nullObj={d:nullArray,o:0};
function __Z1$PN6client13EventListenerE(Larg0){
	var tmp0=null;
	tmp0="DOMContentLoaded";
	document.addEventListener(tmp0,Larg0);
}
function _cheerpCreate_ZN6client6StringC2EPKc(Larg0,Marg0){
	var tmp0=null,Lgeptoindexphi=0,tmp2=null;
	tmp0=String();
	Lgeptoindexphi=0;
	while(1){
		tmp2=String.fromCharCode(Larg0[Marg0+Lgeptoindexphi|0]<<24>>24);
		tmp0=tmp0.concat(tmp2);
		Lgeptoindexphi=Lgeptoindexphi+1|0;
		if((Larg0[Marg0+Lgeptoindexphi|0]&255)!==0)continue;
		break;
	}
	return String(tmp0);
}
function __Z7webMainv(){
	var tmp0=null;
	tmp0="Hi from CQuery Project";
	console.log(tmp0);
}
var _$pstr$p1=new Uint8Array([72,105,32,102,114,111,109,32,67,81,117,101,114,121,32,80,114,111,106,101,99,116,0]);
var _$pstr=new Uint8Array([68,79,77,67,111,110,116,101,110,116,76,111,97,100,101,100,0]);
var $=__Z1$PN6client13EventListenerE;
$.promise=
Promise.resolve();
__Z7webMainv();
