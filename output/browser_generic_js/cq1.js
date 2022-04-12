"use strict";
/*Compiled using Cheerp (R) by Leaning Technologies Ltd*/
var __imul=Math.imul;
var __fround=Math.fround;
var oSlot=0;var nullArray=[null];var nullObj={d:nullArray,o:0};
var __stackPtr=1048576|0;
function __Z7webMainv(){
	__ZN12CQueryStaticclEPN6client13EventListenerE(__ZN6cheerp8CallbackIZ7webMainvE3$_0EEPN6client13EventListenerEOT_());
}
function __ZN6cheerp8CallbackIZ7webMainvE3$_0EEPN6client13EventListenerEOT_(){
	var tmp0=null,tmp1=null,tmp2=0,LsavedStack=null,LsavedStacko=0,tmp4=null;
	try{
		LsavedStack=__stackPtr;
		tmp0=-8+LsavedStack|0;
		__stackPtr=tmp0;
		tmp1={a0:null,a1:null,a2:null};
		tmp4=__ZZ7webMainvEN3$_08__invokeEv;
		tmp1.a0=tmp4;
		tmp4=__ZN6cheerp7ClosureIFvvEEcvPN6client13EventListenerEEv(tmp1);
	}catch($except){
		tmp2=$except;
		tmp2=___gxx_personality_v0(tmp2,0,0);
		LsavedStacko=HEAP32[tmp2>>2];
		LsavedStack=HEAP8;
		HEAP32[(tmp0>>0)>>2]=(LsavedStacko|0);
		HEAP32[4+(tmp0>>0)>>2]=HEAP32[4+tmp2>>2]|0;
		__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
		___cxa_resume(tmp0>>0|0);
		;
	}
	__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
	__stackPtr=LsavedStack;
	return tmp4;
}
function __ZN12CQueryStaticclEPN6client13EventListenerE(Larg0){
	__ZN6CQuery5readyEPN6client13EventListenerE(Larg0);
}
function __ZN6CQuery5readyEPN6client13EventListenerE(Larg0){
	var tmp0=null;
	tmp0="DOMContentLoaded";
	document.addEventListener(tmp0,Larg0);
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
function __ZZ7webMainvEN3$_08__invokeEv(){
	__ZZ7webMainvENK3$_0clEv();
}
function __ZN6cheerp7ClosureIFvvEEcvPN6client13EventListenerEEv(Larg0){
	var tmp0=null;
	if(Larg0.a1!==null){
		tmp0=[{a0:null,a1:null}];
		tmp0[0].a0=Larg0.a1;
		tmp0[0].a1=Larg0.a2;
		tmp0=cheerpCreateClosure(__ZN6cheerp7ClosureIFvvEE14deleter_helperEPNS2_13DeleterHelperE,tmp0[0]);
		__ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE3addEPS2_PNS1_6ObjectE(Larg0.a0,tmp0);
		Larg0.a1=null;
	}
	return Larg0.a0;
}
function __ZN6cheerp7ClosureIFvvEED2Ev(L$p0$p1$pval,L$p0$p2$pval){
	var tmp0=0,tmp1=null,tmp1o=0;
	if(L$p0$p1$pval!==null)try{
		L$p0$p1$pval(L$p0$p2$pval);
	}catch($except){
		tmp0=$except;
		tmp0=___gxx_personality_v0(tmp0,0,1);
		tmp1o=HEAP32[tmp0>>2];
		tmp1=HEAP8;
		___clang_call_terminate(tmp1,tmp1o);
		;
	}
}
function ___clang_call_terminate(Larg0,Marg0){
	___cxa_begin_catch(Larg0,Marg0);
	__ZL8aborting=1;
	throw 'Program called std::terminate()';
	;
}
function __ZN6cheerp7ClosureIFvvEE14deleter_helperEPNS2_13DeleterHelperE(Larg0){
	Larg0.a0(Larg0.a1);
}
function __ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE3addEPS2_PNS1_6ObjectE(Larg0,Larg1){
	var tmp0=null,tmp1=null,tmp2=0,LsavedStack=null,LsavedStacko=0;
	LsavedStack=__stackPtr;
	tmp0=-8+LsavedStack|0;
	__stackPtr=tmp0;
	if(__ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE9resourcesE===null){
		try{
			tmp1=new Map();
		}catch($except){
			tmp2=$except;
			tmp2=___gxx_personality_v0(tmp2,1,0);
			LsavedStacko=HEAP32[tmp2>>2];
			LsavedStack=HEAP8;
			HEAP32[(tmp0>>0)>>2]=(LsavedStacko|0);
			HEAP32[4+(tmp0>>0)>>2]=HEAP32[4+tmp2>>2]|0;
			___cxa_resume(tmp0>>0|0);
			;
		}
		__ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE9resourcesE=tmp1;
	}
	__ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE9resourcesE.set(Larg0,Larg1);
	__stackPtr=LsavedStack;
}
function __ZZ7webMainvENK3$_0clEv(){
	var tmp0=null,tmp0o=0,tmp1=null;
	tmp1="HTML Content Loaded, now script will run";
	console.log(tmp1);
	tmp1="#merhaba";
	tmp0=__ZN12CQueryStaticclERKN6client6StringE(tmp1);
	tmp0o=oSlot;
	__ZN6CQuery5clickEPN6client13EventListenerE(tmp0,tmp0o,__ZN6cheerp8CallbackIZZ7webMainvENK3$_0clEvEUlvE_EEPN6client13EventListenerEOT_());
	__ZN6CQuery5clickEPN6client13EventListenerE(tmp0,tmp0o,__ZN6cheerp8CallbackIZZ7webMainvENK3$_0clEvEUlvE0_EEPN6client13EventListenerEOT_());
}
function __ZN12CQueryStaticclERKN6client6StringE(Larg0){
	var tmp0=null;
	tmp0=[null];
	__ZN6CQuery8set_elemERKN6client6StringE(tmp0,0,Larg0);
	oSlot=0;
	return tmp0;
}
function __ZN6cheerp8CallbackIZZ7webMainvENK3$_0clEvEUlvE_EEPN6client13EventListenerEOT_(){
	var tmp0=null,tmp1=null,tmp2=0,LsavedStack=null,LsavedStacko=0,tmp4=null;
	try{
		LsavedStack=__stackPtr;
		tmp0=-8+LsavedStack|0;
		__stackPtr=tmp0;
		tmp1={a0:null,a1:null,a2:null};
		tmp4=__ZZZ7webMainvENK3$_0clEvENUlvE_8__invokeEv;
		tmp1.a0=tmp4;
		tmp4=__ZN6cheerp7ClosureIFvvEEcvPN6client13EventListenerEEv(tmp1);
	}catch($except){
		tmp2=$except;
		tmp2=___gxx_personality_v0(tmp2,1,0);
		LsavedStacko=HEAP32[tmp2>>2];
		LsavedStack=HEAP8;
		HEAP32[(tmp0>>0)>>2]=(LsavedStacko|0);
		HEAP32[4+(tmp0>>0)>>2]=HEAP32[4+tmp2>>2]|0;
		__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
		___cxa_resume(tmp0>>0|0);
		;
	}
	__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
	__stackPtr=LsavedStack;
	return tmp4;
}
function __ZN6CQuery5clickEPN6client13EventListenerE(Larg0,Marg0,Larg1){
	var tmp0=null,tmp1=null;
	tmp0=Larg0[Marg0];
	tmp1="click";
	tmp0.addEventListener(tmp1,Larg1);
	return Larg0[Marg0];
}
function __ZN6cheerp8CallbackIZZ7webMainvENK3$_0clEvEUlvE0_EEPN6client13EventListenerEOT_(){
	var tmp0=null,tmp1=null,tmp2=0,LsavedStack=null,LsavedStacko=0,tmp4=null;
	try{
		LsavedStack=__stackPtr;
		tmp0=-8+LsavedStack|0;
		__stackPtr=tmp0;
		tmp1={a0:null,a1:null,a2:null};
		tmp4=__ZZZ7webMainvENK3$_0clEvENUlvE0_8__invokeEv;
		tmp1.a0=tmp4;
		tmp4=__ZN6cheerp7ClosureIFvvEEcvPN6client13EventListenerEEv(tmp1);
	}catch($except){
		tmp2=$except;
		tmp2=___gxx_personality_v0(tmp2,1,0);
		LsavedStacko=HEAP32[tmp2>>2];
		LsavedStack=HEAP8;
		HEAP32[(tmp0>>0)>>2]=(LsavedStacko|0);
		HEAP32[4+(tmp0>>0)>>2]=HEAP32[4+tmp2>>2]|0;
		__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
		___cxa_resume(tmp0>>0|0);
		;
	}
	__ZN6cheerp7ClosureIFvvEED2Ev(tmp1.a1,tmp1.a2);
	__stackPtr=LsavedStack;
	return tmp4;
}
function __ZZZ7webMainvENK3$_0clEvENUlvE0_8__invokeEv(){
	__ZZZ7webMainvENK3$_0clEvENKUlvE0_clEv();
}
function __ZZZ7webMainvENK3$_0clEvENKUlvE0_clEv(){
	var tmp0=null;
	tmp0="Clicked Again puhahahah...!";
	console.log(tmp0);
}
function __ZZZ7webMainvENK3$_0clEvENUlvE_8__invokeEv(){
	__ZZZ7webMainvENK3$_0clEvENKUlvE_clEv();
}
function __ZZZ7webMainvENK3$_0clEvENKUlvE_clEv(){
	var tmp0=null;
	tmp0="Clicked Item...!";
	console.log(tmp0);
}
function __ZN6CQuery8set_elemERKN6client6StringE(Larg0,Marg0,Larg1){
	Larg0[Marg0]=document.querySelector(Larg1);
}
function __ZN10__cxxabiv117__class_type_infoD2Ev(Larg0){
}
function __ZN10__cxxabiv117__class_type_infoD0Ev(Larg0){
}
function __ZNK10__cxxabiv116__shim_type_info5noop1Ev(Larg0){
}
function __ZNK10__cxxabiv116__shim_type_info5noop2Ev(Larg0){
}
function __ZNK10__cxxabiv117__class_type_info9can_catchEPKNS_16__shim_type_infoERlRb(Larg0,Larg1,Larg2,Marg2,Larg3){
	var tmp0=null,tmp1=null,tmp2=0;
	tmp0=Larg0.a1;
	tmp1=Larg1.a1;
	if(tmp0===tmp1&&0===0)return 1|0;
	tmp0=Larg1.a0;
	tmp2=Larg1.o|0;
	tmp2=___dynamic_cast(tmp2+1|0,tmp0.a0)|0;
	if((tmp2|0)===-2147483648)return 0|0;
	if((tmp2|0)!==0)tmp0=Larg1.a[Larg1.o-tmp2];
	else{
		tmp0=Larg1;
	}
	if(tmp0!==null){
		tmp1=new constructor_struct$p_ZN10__cxxabiv119__dynamic_cast_infoE();
		tmp1.a0=tmp0;
		tmp1.i1=0;
		tmp1.a2=Larg0;
		tmp1.i3=0;
		tmp1.a4=tmp0;
		tmp1.i5=-1;
		tmp1.i6=0;
		tmp1.i7=0;
		tmp1.i8=0;
		tmp1.i9=0;
		tmp1.i10=0;
		tmp1.i11=0;
		tmp1.i12=0;
		tmp1.i13=0;
		tmp1.i15=0;
		tmp1.i14=1;
		tmp0.a0.a8(tmp0,tmp1,Larg2[Marg2]|0,1);
		tmp2=tmp1.i8|0;
		if((tmp2|0)===1)Larg2[Marg2]=tmp1.i6|0;
		return ((tmp2|0)===1?1:0)|0;
	}
	return 0|0;
}
function __ZNK10__cxxabiv117__class_type_info16search_above_dstEPNS_19__dynamic_cast_infoEllib(Larg0,Larg1,Larg2,Larg3,Larg4,Larg5){
	var tmp0=null,Lmergedinsert=0,tmp2=null,Lgeptoindexphi=0,Lgeptoindexphi3=0;
	tmp0=Larg1.a2;
	a:{
		if(Larg5){
			if(Larg0!==tmp0){
				tmp2=Larg0.a1;
				tmp0=tmp0.a1;
				Lmergedinsert=tmp2[0]|0;
				if((Lmergedinsert&255)!==0){
					Lgeptoindexphi3=0;
					Lgeptoindexphi=0;
					while(1){
						if((Lmergedinsert&255)===(tmp0[Lgeptoindexphi3]&255)){
							Lgeptoindexphi=Lgeptoindexphi+1|0;
							Lmergedinsert=tmp2[Lgeptoindexphi]|0;
							Lgeptoindexphi3=Lgeptoindexphi3+1|0;
							if((Lmergedinsert&255)!==0)continue;
							Lmergedinsert=0;
						}
						break;
					}
				}else{
					Lmergedinsert=0;
					Lgeptoindexphi3=0;
				}
				if((Lmergedinsert&255)!==(tmp0[Lgeptoindexphi3]&255))break a;
			}
		}else{
			tmp2=Larg0.a1;
			tmp0=tmp0.a1;
			if(tmp2!==tmp0||0!==0)break a;
		}
		Lmergedinsert=Larg1.i15&16711935|256;
		Larg1.i15=Lmergedinsert;
		if((Larg1.i1|0)===(Larg3|0)){
			Larg1.i15=Lmergedinsert&16711936|1;
			Lmergedinsert=Larg1.i6|0;
			if((Lmergedinsert|0)!==0){
				if((Lmergedinsert|0)===(Larg2|0)){
					if((Larg1.i8|0)===2)Larg1.i8=Larg4;
					if((Larg1.i14|0)!==1)break a;
					if((Larg1.i8|0)!==1)break a;
				}else Larg1.i11=(Larg1.i11|0)+1|0;
			}else{
				Larg1.i6=Larg2;
				Larg1.i8=Larg4;
				Larg1.i11=1;
				if(!((Larg1.i14|0)===1?((Larg4|0)===1?1:0)|0:0|0))break a;
			}
			Larg1.i15=65793;
		}
	}
}
function __ZNK10__cxxabiv117__class_type_info16search_below_dstEPNS_19__dynamic_cast_infoElib(Larg0,Larg1,Larg2,Larg3,Larg4){
	var tmp0=null,tmp1=null,tmp2=0,Lgeptoindexphi3=0,Lgeptoindexphi13=0,Lgeptoindexphi=0;
	tmp0=Larg1.a2;
	a:{
		b:{
			if(Larg4){
				if(Larg0===tmp0)break b;
				tmp1=Larg0.a1;
				tmp0=tmp0.a1;
				tmp2=tmp1[0]|0;
				if((tmp2&255)===0){
					Lgeptoindexphi13=0;
					Lgeptoindexphi3=0;
				}else{
					Lgeptoindexphi13=tmp2;
					Lgeptoindexphi3=0;
					Lgeptoindexphi=0;
					while(1){
						if((Lgeptoindexphi13&255)===(tmp0[Lgeptoindexphi3]&255)){
							Lgeptoindexphi=Lgeptoindexphi+1|0;
							Lgeptoindexphi13=tmp1[Lgeptoindexphi]|0;
							Lgeptoindexphi3=Lgeptoindexphi3+1|0;
							if((Lgeptoindexphi13&255)!==0)continue;
							Lgeptoindexphi13=0;
						}
						break;
					}
				}
				if((Lgeptoindexphi13&255)===(tmp0[Lgeptoindexphi3]&255))break b;
				tmp0=Larg1.a0;
				if(Larg0!==tmp0){
					tmp0=tmp0.a1;
					if((tmp2&255)===0){
						tmp2=0;
						Lgeptoindexphi13=0;
					}else{
						Lgeptoindexphi13=0;
						Lgeptoindexphi3=0;
						while(1){
							if((tmp2&255)===(tmp0[Lgeptoindexphi13]&255)){
								Lgeptoindexphi3=Lgeptoindexphi3+1|0;
								tmp2=tmp1[Lgeptoindexphi3]|0;
								Lgeptoindexphi13=Lgeptoindexphi13+1|0;
								if((tmp2&255)!==0)continue;
								tmp2=0;
							}
							break;
						}
					}
					if((tmp2&255)!==(tmp0[Lgeptoindexphi13]&255))break a;
				}
			}else{
				tmp1=Larg0.a1;
				tmp0=tmp0.a1;
				if(tmp1===tmp0&&0===0)break b;
				tmp0=Larg1.a0;
				tmp0=tmp0.a1;
				if(tmp1!==tmp0||0!==0)break a;
			}
			if((Larg1.i6|0)!==(Larg2|0))if((Larg1.i7|0)!==(Larg2|0)){
				Larg1.i10=Larg3;
				Larg1.i7=Larg2;
				Larg1.i12=(Larg1.i12|0)+1|0;
				if((Larg1.i11|0)===1)if((Larg1.i8|0)===2)Larg1.i15=Larg1.i15&65535|65536;
				Larg1.i13=4;
				break a;
			}
			if((Larg3|0)!==1)break a;
			Larg1.i10=1;
			break a;
		}
		if((Larg1.i1|0)===(Larg2|0))if((Larg1.i9|0)!==1)Larg1.i9=Larg3;
	}
}
function __ZNK10__cxxabiv117__class_type_info27has_unambiguous_public_baseEPNS_19__dynamic_cast_infoEli(Larg0,Larg1,Larg2,Larg3){
	var tmp0=null,tmp1=0,tmp2=null;
	tmp2=Larg1.a2;
	tmp0=Larg0.a1;
	tmp2=tmp2.a1;
	if(tmp0===tmp2&&0===0){
		tmp1=Larg1.i6|0;
		if((tmp1|0)!==0){
			if((tmp1|0)===(Larg2|0)){
				if((Larg1.i8|0)===2)Larg1.i8=Larg3;
			}else{
				Larg1.i11=(Larg1.i11|0)+1|0;
				Larg1.i8=2;
				Larg1.i15=Larg1.i15&65535|65536;
			}
		}else{
			Larg1.i6=Larg2;
			Larg1.i8=Larg3;
			Larg1.i11=1;
		}
	}
}
function ___dynamic_cast(Larg0,Larg1){
	var tmp0=null,tmp1=null,tmp2=0;
	tmp0=new constructor_struct$p_ZN10__cxxabiv119__dynamic_cast_infoE();
	tmp0.a0=__ZTIN10__cxxabiv117__class_type_infoE;
	tmp0.i1=Larg0;
	tmp0.a2=__ZTIN10__cxxabiv116__shim_type_infoE;
	tmp0.i3=1;
	tmp0.a4=Larg1;
	tmp0.i5=0;
	tmp0.i6=0;
	tmp0.i7=0;
	tmp0.i8=0;
	tmp0.i9=0;
	tmp0.i10=0;
	tmp0.i11=0;
	tmp0.i12=0;
	tmp0.i13=0;
	tmp0.i14=0;
	tmp0.i15=0;
	tmp1=Larg1.a1;
	a:if(tmp1===__ZTSN10__cxxabiv117__class_type_infoE&&0===0){
		tmp0.i14=1;
		Larg1.a0.a6(Larg1,tmp0,1,1,1,0);
		if((tmp0.i8|0)===1)return Larg0-1|0;
	}else{
		Larg1.a0.a7(Larg1,tmp0,1,1,0);
		tmp2=tmp0.i11|0;
		if((tmp2|0)!==0){
			if((tmp2|0)!==1)break a;
			if((tmp0.i8|0)!==1)if(!(((tmp0.i12|0)!==0?0|0:((tmp0.i9|0)===1?1:0)|0)?((tmp0.i10|0)===1?1:0)|0:0|0))break a;
			tmp2=tmp0.i6|0;
		}else{
			if(!(((tmp0.i12|0)===1?((tmp0.i9|0)===1?1:0)|0:0|0)?((tmp0.i10|0)===1?1:0)|0:0|0))break a;
			tmp2=tmp0.i7|0;
		}
		if((tmp2|0)!==-2147483648)return Larg0-tmp2|0;
	}
	return  -2147483648|0;
}
function __ZN10__cxxabiv120__si_class_type_infoD2Ev(Larg0){
}
function __ZN10__cxxabiv120__si_class_type_infoD0Ev(Larg0){
}
function __ZNK10__cxxabiv120__si_class_type_info16search_above_dstEPNS_19__dynamic_cast_infoEllib(Larg0,Larg1,Larg2,Larg3,Larg4,Larg5){
	var tmp0=null,Lmergedinsert=0,tmp2=null,Lgeptoindexphi=0,Lgeptoindexphi3=0;
	tmp0=Larg1.a2;
	a:{
		b:{
			if(Larg5){
				if(Larg0!==tmp0){
					tmp2=Larg0.a1;
					tmp0=tmp0.a1;
					Lmergedinsert=tmp2[0]|0;
					if((Lmergedinsert&255)!==0){
						Lgeptoindexphi3=0;
						Lgeptoindexphi=0;
						while(1){
							if((Lmergedinsert&255)===(tmp0[Lgeptoindexphi3]&255)){
								Lgeptoindexphi=Lgeptoindexphi+1|0;
								Lmergedinsert=tmp2[Lgeptoindexphi]|0;
								Lgeptoindexphi3=Lgeptoindexphi3+1|0;
								if((Lmergedinsert&255)!==0)continue;
								Lmergedinsert=0;
							}
							break;
						}
					}else{
						Lmergedinsert=0;
						Lgeptoindexphi3=0;
					}
					if((Lmergedinsert&255)!==(tmp0[Lgeptoindexphi3]&255))break b;
				}
			}else{
				tmp2=Larg0.a1;
				tmp0=tmp0.a1;
				if(tmp2!==tmp0||0!==0)break b;
			}
			Lmergedinsert=Larg1.i15&16711935|256;
			Larg1.i15=Lmergedinsert;
			if((Larg1.i1|0)!==(Larg3|0))break a;
			Larg1.i15=Lmergedinsert&16711936|1;
			Lmergedinsert=Larg1.i6|0;
			if((Lmergedinsert|0)!==0){
				if((Lmergedinsert|0)===(Larg2|0)){
					if((Larg1.i8|0)===2)Larg1.i8=Larg4;
					if((Larg1.i14|0)!==1)break a;
					if((Larg1.i8|0)!==1)break a;
				}else Larg1.i11=(Larg1.i11|0)+1|0;
			}else{
				Larg1.i6=Larg2;
				Larg1.i8=Larg4;
				Larg1.i11=1;
				if(!((Larg1.i14|0)===1?((Larg4|0)===1?1:0)|0:0|0))break a;
			}
			Larg1.i15=65793;
			break a;
		}
		tmp0=Larg0.a2;
		tmp0.a0.a6(tmp0,Larg1,Larg2,Larg3,Larg4,Larg5);
	}
}
function __ZNK10__cxxabiv120__si_class_type_info16search_below_dstEPNS_19__dynamic_cast_infoElib(Larg0,Larg1,Larg2,Larg3,Larg4){
	var tmp0=null,tmp1=null,tmp2=0,Lgeptoindexphi3=0,Lgeptoindexphi13=0,Lgeptoindexphi=0;
	tmp0=Larg1.a2;
	a:{
		b:{
			c:{
				if(Larg4){
					if(Larg0===tmp0)break b;
					tmp1=Larg0.a1;
					tmp0=tmp0.a1;
					tmp2=tmp1[0]|0;
					if((tmp2&255)===0){
						Lgeptoindexphi13=0;
						Lgeptoindexphi3=0;
					}else{
						Lgeptoindexphi13=tmp2;
						Lgeptoindexphi3=0;
						Lgeptoindexphi=0;
						while(1){
							if((Lgeptoindexphi13&255)===(tmp0[Lgeptoindexphi3]&255)){
								Lgeptoindexphi=Lgeptoindexphi+1|0;
								Lgeptoindexphi13=tmp1[Lgeptoindexphi]|0;
								Lgeptoindexphi3=Lgeptoindexphi3+1|0;
								if((Lgeptoindexphi13&255)!==0)continue;
								Lgeptoindexphi13=0;
							}
							break;
						}
					}
					if((Lgeptoindexphi13&255)===(tmp0[Lgeptoindexphi3]&255))break b;
					tmp0=Larg1.a0;
					if(Larg0!==tmp0){
						tmp0=tmp0.a1;
						if((tmp2&255)===0){
							tmp2=0;
							Lgeptoindexphi13=0;
						}else{
							Lgeptoindexphi13=0;
							Lgeptoindexphi3=0;
							while(1){
								if((tmp2&255)===(tmp0[Lgeptoindexphi13]&255)){
									Lgeptoindexphi3=Lgeptoindexphi3+1|0;
									tmp2=tmp1[Lgeptoindexphi3]|0;
									Lgeptoindexphi13=Lgeptoindexphi13+1|0;
									if((tmp2&255)!==0)continue;
									tmp2=0;
								}
								break;
							}
						}
						if((tmp2&255)!==(tmp0[Lgeptoindexphi13]&255))break c;
					}
				}else{
					tmp1=Larg0.a1;
					tmp0=tmp0.a1;
					if(tmp1===tmp0&&0===0)break b;
					tmp0=Larg1.a0;
					tmp0=tmp0.a1;
					if(tmp1!==tmp0||0!==0)break c;
				}
				if((Larg1.i6|0)!==(Larg2|0))if((Larg1.i7|0)!==(Larg2|0)){
					Larg1.i10=Larg3;
					if((Larg1.i13|0)!==4){
						Larg1.i15=Larg1.i15&16711680;
						tmp0=Larg0.a2;
						tmp0.a0.a6(tmp0,Larg1,Larg2,Larg2,1,Larg4);
						tmp2=Larg1.i15|0;
						if((tmp2&65280&16777215)!==0){
							Larg1.i13=3;
							if((tmp2&255)!==0)break a;
						}else Larg1.i13=4;
					}
					Larg1.i7=Larg2;
					Larg1.i12=(Larg1.i12|0)+1|0;
					if((Larg1.i11|0)!==1)break a;
					if((Larg1.i8|0)!==2)break a;
					Larg1.i15=Larg1.i15&65535|65536;
					break a;
				}
				if((Larg3|0)!==1)break a;
				Larg1.i10=1;
				break a;
			}
			tmp0=Larg0.a2;
			tmp0.a0.a7(tmp0,Larg1,Larg2,Larg3,Larg4);
			break a;
		}
		if((Larg1.i1|0)===(Larg2|0))if((Larg1.i9|0)!==1)Larg1.i9=Larg3;
	}
}
function __ZNK10__cxxabiv120__si_class_type_info27has_unambiguous_public_baseEPNS_19__dynamic_cast_infoEli(Larg0,Larg1,Larg2,Larg3){
	var tmp0=null,tmp1=0,tmp2=null;
	tmp2=Larg1.a2;
	tmp0=Larg0.a1;
	tmp2=tmp2.a1;
	if(tmp0===tmp2&&0===0){
		tmp1=Larg1.i6|0;
		if((tmp1|0)!==0){
			if((tmp1|0)===(Larg2|0)){
				if((Larg1.i8|0)===2)Larg1.i8=Larg3;
			}else{
				Larg1.i11=(Larg1.i11|0)+1|0;
				Larg1.i8=2;
				Larg1.i15=Larg1.i15&65535|65536;
			}
		}else{
			Larg1.i6=Larg2;
			Larg1.i8=Larg3;
			Larg1.i11=1;
		}
	}else{
		tmp2=Larg0.a2;
		tmp2.a0.a8(tmp2,Larg1,Larg2,Larg3);
	}
}
function ___gxx_personality_v0(Larg0,Larg1,Larg2){
	var LsavedStack=null,tmp1=null,tmp2=null,tmp2o=0,tmp3=0,tmp4=0,L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=null,tmp6=null,tmp6o=0,tmp7=null,tmp7o=0,tmp8=0;
	LsavedStack=__stackPtr;
	tmp2=-8+LsavedStack|0;
	__stackPtr=tmp2;
	if(!(HEAP8[1048592]|0)){
		HEAP32[1048588>>2]=0;
		tmp3=0;
		HEAP32[1048584>>2]=(tmp3|0);
		HEAP8[1048592]=1;
	}
	if(!(__ZZ20__gxx_personality_v0E5reent|0))if(!(__ZL8aborting|0)){
		__ZZ20__gxx_personality_v0E5reent=1;
		tmp3=Larg2+Larg1|0;
		a:{
			b:if(((Larg0 instanceof CheerpException|0)&1)===0){
				if((Larg2|0)>0){
					tmp4=Larg1;
					while(1){
						if(___cxa_cheerp_clause_table[tmp4].a0===__ZTIN6cheerp11JSExceptionE){
							tmp2=[null];
							tmp2[0]=Larg0;
							tmp4=__ZN10__cxxabiv19Exception9allocatorE$p2|0;
							c:{
								d:{
									if((tmp4|0)>1){
										L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=__ZN10__cxxabiv19Exception9allocatorE$p1;
										tmp8=1;
										while(1){
											if((L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp8]&255)!==0){
												tmp8=tmp8+1|0;
												if((tmp8|0)===(tmp4|0))break d;
												continue;
											}
											break;
										}
									}else{
										tmp8=1;
									}
									if((tmp8|0)!==(tmp4|0)){
										tmp4=tmp8;
										break c;
									}
								}
								tmp8=tmp4<<1;
								__ZN10__cxxabiv19Exception9allocatorE$p2=tmp8;
								L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=__ZN10__cxxabiv19Exception9allocatorE$p0;
								if(L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed!==nullArray||0!==0)L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=resizeArray_struct$p_ZN10__cxxabiv19ExceptionE(L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed,L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed.length,tmp8/40|0);
								else L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=createArray_struct$p_ZN10__cxxabiv19ExceptionE(tmp8/40|0);
								__ZN10__cxxabiv19Exception9allocatorE$p0=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed;
								tmp8=__ZN10__cxxabiv19Exception9allocatorE$p2|0;
								L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=__ZN10__cxxabiv19Exception9allocatorE$p1;
								if(L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed!==nullArray||0!==0)L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=(function(){var __old__=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed;
									var __ret__=new Uint8Array(tmp8/1|0);
									__ret__.set(__old__.subarray(0, Math.min(__ret__.length,__old__.length)));
									return __ret__;})();
								else L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=new Uint8Array(tmp8/1|0);
								__ZN10__cxxabiv19Exception9allocatorE$p1=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed;
							}
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=__ZN10__cxxabiv19Exception9allocatorE$p0;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a1=tmp2;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a2=nullArray;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a2o=0;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a3=__ZTIN6cheerp11JSExceptionE;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a4=null;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].i5=1;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].i6=0;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a8=null;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a9=null;
							tmp2=__ZN10__cxxabiv19Exception9allocatorE$p1;
							tmp2[tmp4]=1;
							L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed[tmp4].a0=Larg0;
							__ZN10__cxxabiv1L17current_exceptionE={d:L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed,o:0+tmp4|0};
							break b;
						}
						tmp4=tmp4+1|0;
						if((tmp4|0)<(tmp3|0))continue;
						break;
					}
				}
				tmp3=tmp2>>0;
				HEAP32[4+tmp3>>2]=0;
				tmp4=0;
				HEAP32[tmp3>>2]=(tmp4|0);
				tmp2o=HEAP32[tmp3>>2];
				tmp2=HEAP8;
				tmp4=tmp2o;
				HEAP32[1048584>>2]=(tmp4|0);
				HEAP32[1048588>>2]=0;
				break a;
			}
			tmp2=__ZN10__cxxabiv1L17current_exceptionE;
			HEAP32[1048588>>2]=0;
			tmp4=tmp2.o;
			HEAP32[1048584>>2]=(tmp4|0);
			if((Larg2|0)>0){
				tmp1={a0:[0],i1:0,i2:0};
				tmp4=Larg1;
				while(1){
					L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed=___cxa_cheerp_clause_table[tmp4];
					tmp6=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed.a0;
					if(tmp6!==null){
						try{
							tmp7=tmp2.d[tmp2.o].a3;
							tmp1.a0[0]=0;
							tmp1.i1=0;
							tmp1.i2=0;
							tmp8=tmp6.a0.a5(tmp6,tmp7,tmp1.a0,0,tmp1.i2)|0;
						}catch($except){
							tmp3=$except;
							tmp3=___gxx_personality_v0(tmp3,0,1);
							tmp2o=HEAP32[tmp3>>2];
							tmp2=HEAP8;
							___clang_call_terminate(tmp2,tmp2o);
							;
						}
						tmp1.i1=tmp8?1:0;
						if(tmp8){
							tmp6=tmp2.d[tmp2.o].a1;
							tmp2.d[tmp2.o].a2=tmp6;
							tmp2.d[tmp2.o].a2o=0;
							if((tmp1.i2&255)!==0){
								tmp6=tmp6[0];
								tmp2.d[tmp2.o].a2=tmp6.d;
								tmp2.d[tmp2.o].a2o=tmp6.o;
							}
							tmp3=tmp1.a0[0]|0;
							if((tmp3|0)!==0){
								tmp6o=tmp2.d[tmp2.o].a2o;
								tmp6=tmp2.d[tmp2.o].a2;
								if(tmp6!==nullArray||tmp6o!==0){
									tmp7o=tmp6[tmp6o].o-(-tmp3|0);
									tmp7=tmp6[tmp6o].a;
									tmp2.d[tmp2.o].a2=tmp7;
									tmp2.d[tmp2.o].a2o=tmp7o;
								}
							}
							HEAP32[1048588>>2]=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed.i1|0;
						}else{
							tmp4=tmp4+1|0;
							if((tmp4|0)<(tmp3|0))continue;
						}
					}else HEAP32[1048588>>2]=L__cxa_cheerp_clause_table$poptgep1$poptgep$poptgepsqueezed.i1|0;
					break;
				}
			}
			__ZZ20__gxx_personality_v0E5reent=0;
		}
		__stackPtr=LsavedStack;
		return 1048584|0;
	}
	__ZL8aborting=1;
	throw 'Program called std::terminate()';
	;
}
function ___cxa_begin_catch(Larg0,Marg0){
	var tmp0=0,tmp1=null,tmp2=null,tmp3=0;
	tmp0=Marg0;
	tmp1=__ZN10__cxxabiv19Exception9allocatorE$p0;
	tmp3=tmp1[tmp0].i6|0;
	tmp3=(((tmp3|0)>=0)?tmp3:0-(tmp3|0)|0);
	tmp1[tmp0].i6=tmp3+1|0;
	tmp2=__ZN10__cxxabiv1L17thrown_exceptionsE;
	if(tmp1!==tmp2.d||(0+tmp0|0)!==tmp2.o){
		tmp1[tmp0].a8=tmp2.d[tmp2.o];
		__ZN10__cxxabiv1L17thrown_exceptionsE={d:tmp1,o:0+tmp0|0};
	}
}
function ___cxa_resume(Larg0){
	var tmp0=0,tmp1=null,tmp1o=0;
	tmp1o=HEAP32[Larg0>>2];
	tmp1=HEAP8;
	tmp0=tmp1o;
	tmp1=__ZN10__cxxabiv19Exception9allocatorE$p0;
	tmp1=tmp1[tmp0].a0;
	throw tmp1;
	;
}
var _$pstr=new Uint8Array([68,79,77,67,111,110,116,101,110,116,76,111,97,100,101,100,0]);
var _promotedMalloc$p3=createArray_struct$p_ZN10__cxxabiv19ExceptionE(16);
var __ZN10__cxxabiv19Exception9allocatorE$p0=_promotedMalloc$p3;
var __ZL8aborting=0;
var __ZN10__cxxabiv1L17thrown_exceptionsE=nullObj;
var __ZN6cheerp20EscapedResourcesListIN6client13EventListenerEE9resourcesE=null;
var _$pstr$p1=new Uint8Array([72,84,77,76,32,67,111,110,116,101,110,116,32,76,111,97,100,101,100,44,32,110,111,119,32,115,99,114,105,112,116,32,119,105,108,108,32,114,117,110,0]);
var _$pstr$p2=new Uint8Array([35,109,101,114,104,97,98,97,0]);
var _$pstr$p5=new Uint8Array([67,108,105,99,107,101,100,32,65,103,97,105,110,32,112,117,104,97,104,97,104,97,104,46,46,46,33,0]);
var _$pstr$p3=new Uint8Array([99,108,105,99,107,0]);
var _$pstr$p4=new Uint8Array([67,108,105,99,107,101,100,32,73,116,101,109,46,46,46,33,0]);
var __ZZ20__gxx_personality_v0E5reent=0;
var __ZTSN10__cxxabiv120__si_class_type_infoE=new Uint8Array([78,49,48,95,95,99,120,120,97,98,105,118,49,50,48,95,95,115,105,95,99,108,97,115,115,95,116,121,112,101,95,105,110,102,111,69,0]);
var __ZTIN10__cxxabiv120__si_class_type_infoE={a0:undefined,a1:__ZTSN10__cxxabiv120__si_class_type_infoE,a2:undefined};
var __ZTVN10__cxxabiv120__si_class_type_infoE={a0:__ZTIN10__cxxabiv120__si_class_type_infoE,a1:__ZN10__cxxabiv120__si_class_type_infoD2Ev,a2:__ZN10__cxxabiv120__si_class_type_infoD0Ev,a3:__ZNK10__cxxabiv116__shim_type_info5noop1Ev,a4:__ZNK10__cxxabiv116__shim_type_info5noop2Ev,a5:__ZNK10__cxxabiv117__class_type_info9can_catchEPKNS_16__shim_type_infoERlRb,a6:__ZNK10__cxxabiv120__si_class_type_info16search_above_dstEPNS_19__dynamic_cast_infoEllib,a7:__ZNK10__cxxabiv120__si_class_type_info16search_below_dstEPNS_19__dynamic_cast_infoElib,a8:__ZNK10__cxxabiv120__si_class_type_info27has_unambiguous_public_baseEPNS_19__dynamic_cast_infoEli};
__ZTIN10__cxxabiv120__si_class_type_infoE.a0=__ZTVN10__cxxabiv120__si_class_type_infoE;
var __ZTSN10__cxxabiv117__class_type_infoE=new Uint8Array([78,49,48,95,95,99,120,120,97,98,105,118,49,49,55,95,95,99,108,97,115,115,95,116,121,112,101,95,105,110,102,111,69,0]);
var __ZTSN10__cxxabiv116__shim_type_infoE=new Uint8Array([78,49,48,95,95,99,120,120,97,98,105,118,49,49,54,95,95,115,104,105,109,95,116,121,112,101,95,105,110,102,111,69,0]);
var __ZTSSt9type_info=new Uint8Array([83,116,57,116,121,112,101,95,105,110,102,111,0]);
var __ZTISt9type_info={a0:undefined,a1:__ZTSSt9type_info};
var __ZTIN10__cxxabiv116__shim_type_infoE={a0:__ZTVN10__cxxabiv120__si_class_type_infoE,a1:__ZTSN10__cxxabiv116__shim_type_infoE,a2:__ZTISt9type_info};
var __ZTIN10__cxxabiv117__class_type_infoE={a0:__ZTVN10__cxxabiv120__si_class_type_infoE,a1:__ZTSN10__cxxabiv117__class_type_infoE,a2:__ZTIN10__cxxabiv116__shim_type_infoE};
__ZTIN10__cxxabiv120__si_class_type_infoE.a2=__ZTIN10__cxxabiv117__class_type_infoE;
var __ZTVN10__cxxabiv117__class_type_infoE={a0:__ZTIN10__cxxabiv117__class_type_infoE,a1:__ZN10__cxxabiv117__class_type_infoD2Ev,a2:__ZN10__cxxabiv117__class_type_infoD0Ev,a3:__ZNK10__cxxabiv116__shim_type_info5noop1Ev,a4:__ZNK10__cxxabiv116__shim_type_info5noop2Ev,a5:__ZNK10__cxxabiv117__class_type_info9can_catchEPKNS_16__shim_type_infoERlRb,a6:__ZNK10__cxxabiv117__class_type_info16search_above_dstEPNS_19__dynamic_cast_infoEllib,a7:__ZNK10__cxxabiv117__class_type_info16search_below_dstEPNS_19__dynamic_cast_infoElib,a8:__ZNK10__cxxabiv117__class_type_info27has_unambiguous_public_baseEPNS_19__dynamic_cast_infoEli};
__ZTISt9type_info.a0=__ZTVN10__cxxabiv117__class_type_infoE;
var __ZTSN6cheerp11JSExceptionE=new Uint8Array([78,54,99,104,101,101,114,112,49,49,74,83,69,120,99,101,112,116,105,111,110,69,0]);
var __ZTIN6cheerp11JSExceptionE={a0:__ZTVN10__cxxabiv117__class_type_infoE,a1:__ZTSN6cheerp11JSExceptionE};
var __ZN10__cxxabiv19Exception9allocatorE$p2=16;
var _promotedMalloc$p4=new Uint8Array(16);
var __ZN10__cxxabiv19Exception9allocatorE$p1=_promotedMalloc$p4;
var __ZN10__cxxabiv1L17current_exceptionE=nullObj;
var ___cxa_cheerp_clause_table=[{a0:null,i1:0}];
function constructor_struct$p_ZN10__cxxabiv19ExceptionE(){
	this.a0=null;
	this.a1=nullArray;
	this.a2=nullArray;
	this.a2o=0;
	this.a3=null;
	this.a4=null;
	this.i5=0;
	this.i6=0;
	this.a7=null;
	this.a8=null;
	this.a9=null;
}
function construct_literal1(){
	this.a0=null;
	this.a1=null;
	this.a2=null;
	this.a3=null;
	this.a4=null;
	this.a5=null;
	this.a6=null;
	this.a7=null;
	this.a8=null;
}
function constructor_struct$p_ZN10__cxxabiv119__dynamic_cast_infoE(){
	this.a0=null;
	this.i1=0;
	this.a2=null;
	this.i3=0;
	this.a4=null;
	this.i5=0;
	this.i6=0;
	this.i7=0;
	this.i8=0;
	this.i9=0;
	this.i10=0;
	this.i11=0;
	this.i12=0;
	this.i13=0;
	this.i14=0;
	this.i15=0;
}
function createArray_struct$p_ZN10__cxxabiv19ExceptionE(e){
	var r=[];
	for(var i=0;i<e;i++)
	r[i]=new constructor_struct$p_ZN10__cxxabiv19ExceptionE();
	return r;
}
function resizeArray_struct$p_ZN10__cxxabiv19ExceptionE(r,s,e){
	for(var i=s;i<e;i++)
	r[i]=new constructor_struct$p_ZN10__cxxabiv19ExceptionE();
	return r;
}
function cheerpCreateClosure(func, obj){return function(){var a=Array.prototype.slice.call(arguments);a.unshift(obj);return func.apply(null,a);};}
function cheerpCreateClosureSplit(func, obj, objo){return function(){var a=Array.prototype.slice.call(arguments);a.unshift(obj,objo);return func.apply(null,a);};}
function CheerpException(m){
	var instance=new Error('Uncaught C++ exception: '+m);
	instance.name='CheerpException';
	Object.setPrototypeOf(instance,Object.getPrototypeOf(this));
	if(Error.captureStackTrace){
		Error.captureStackTrace(instance, CheerpException);
	}
	return instance;
}
CheerpException.prototype=Object.create(Error.prototype);
function __dummy(){throw new Error('this should be unreachable');};
var __heap = new ArrayBuffer(8388608);
var HEAP8=null,HEAP32=null;
assignHeaps(__heap);
__Z7webMainv();
function assignHeaps(tmp0){
	HEAP8=new Uint8Array(tmp0);
	HEAP32=new Int32Array(tmp0);
}
