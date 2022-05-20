"use strict";
/*Compiled using Cheerp (R) by Leaning Technologies Ltd*/
var __imul=Math.imul;
var __fround=Math.fround;
var oSlot=0;var nullArray=[null];var nullObj={d:nullArray,o:0};
function __Z25generateRandomColorStringv(){
	var tmp0=-0.,tmp1=null,tmp2=null,tmp3=0;
	tmp2="#";
	tmp3=0;
	while(1){
		tmp0=+Math.floor( +Math.random()*16);
		tmp1=String.fromCharCode(__ZL6hexArr[~~tmp0]<<24>>24);
		tmp2=tmp2.concat(tmp1);
		tmp3=tmp3+1|0;
		if((tmp3|0)!==6)continue;
		break;
	}
	return tmp2;
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
function __Z7webMainv(){
	var tmp0=-0.,tmp1=null,tmp2=-0.,tmp3=0,tmp4=null,tmp5=null;
	tmp0=+Date.now();
	tmp3=0;
	while(1){
		tmp4="body";
		tmp1=__ZN12CQueryStaticclERKN6client6StringE(tmp4);
		tmp5=__Z25generateRandomColorStringv();
		__Z11addCssStylePN6client21ElementCSSInlineStyleE14CSSStyleHelperRKNS_6StringE(tmp1.a0,tmp5);
		tmp3=tmp3+1|0;
		if((tmp3|0)!==100000)continue;
		break;
	}
	tmp2=+Date.now();
	tmp4="Ellapsed time is";
	__ZN6client7Console3logIJdEEEvRKNS_6StringEDpOT_(tmp4,tmp2-tmp0);
}
function __ZN12CQueryStaticclERKN6client6StringE(Larg0){
	var tmp0=null;
	tmp0={a0:null,a1:null};
	tmp0.a1=null;
	__ZN6CQuery8set_elemERKN6client6StringE(tmp0,Larg0);
	return tmp0;
}
function __ZN6client7Console3logIJdEEEvRKNS_6StringEDpOT_(Larg0,L$pval){
	var tmp0=null;
	tmp0=String(L$pval);
	console.log(Larg0,tmp0);
}
function __Z11addCssStylePN6client21ElementCSSInlineStyleE14CSSStyleHelperRKNS_6StringE(Larg0,Larg1){
	Larg0.style.backgroundColor=Larg1;
}
function __ZN6CQuery8set_elemERKN6client6StringE(Larg0,Larg1){
	Larg0.a0=document.querySelector(Larg1);
	Larg0.a1=Larg1;
}

var __ZL6hexArr=new Uint8Array([48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70]);
__Z7webMainv();
