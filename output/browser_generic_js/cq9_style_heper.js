"use strict";
/*Compiled using Cheerp (R) by Leaning Technologies Ltd*/
var __imul=Math.imul;
var __fround=Math.fround;
var oSlot=0;var nullArray=[null];var nullObj={d:nullArray,o:0};
function __Z11addCssStylePN6client21ElementCSSInlineStyleE14CSSStyleHelperPNS_6StringE(Larg0,Larg1){
	var tmp0=null;
	tmp0=Larg0.style;
	tmp0.backgroundColor=Larg1;
}
function _main(){
	var tmp0=null,tmp1=null;
	tmp0="test";
	tmp1=document.getElementById(tmp0);
	__Z11addCssStylePN6client21ElementCSSInlineStyleE14CSSStyleHelperPNS_6StringE(tmp1,"red");
	;
}
function _cheerpCreate_ZN6client6StringC2EPKc(Larg0,Marg0){
	return String(__ZN6client6String11fromCharPtrIcEEPS0_PKT_(Larg0,Marg0));
}
function __ZN6client6String11fromCharPtrIcEEPS0_PKT_(Larg0,Marg0){
	var tmp0=null,Lgeptoindexphi=0,tmp2=null;
	tmp0=String();
	if((Larg0[Marg0]&255)===0)return tmp0;
	Lgeptoindexphi=0;
	while(1){
		tmp2=String.fromCharCode(Larg0[Marg0+Lgeptoindexphi|0]<<24>>24);
		tmp0=tmp0.concat(tmp2);
		Lgeptoindexphi=Lgeptoindexphi+1|0;
		if((Larg0[Marg0+Lgeptoindexphi|0]&255)!==0)continue;
		break;
	}
	return tmp0;
}
var _$pstr=new Uint8Array([116,101,115,116,0]);
var _$pstr$p1=new Uint8Array([114,101,100,0]);
_main();
