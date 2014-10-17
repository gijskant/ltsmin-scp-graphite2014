#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
        
	// inputs
	int inputs[] = {2,4,3,1,5};

		const int error_2 = 1;
		const int error_4 = 1;
		const int error_6 = 1;
		const int error_8 = 1;
		const int error_11 = 1;
		const int error_15 = 1;
		const int error_19 = 1;
		const int error_22 = 1;
		const int error_23 = 1;
		const int error_24 = 1;
		const int error_29 = 1;
		const int error_33 = 1;
		const int error_34 = 1;
		const int error_36 = 1;
		const int error_37 = 1;
		const int error_39 = 1;
		const int error_40 = 1;
		const int error_41 = 1;
		const int error_42 = 1;
		const int error_49 = 1;
		const int error_52 = 1;
		const int error_55 = 1;
		const int error_56 = 1;
		const int error_61 = 1;
		const int error_63 = 1;
		const int error_65 = 1;
		const int error_66 = 1;
		const int error_67 = 1;
		const int error_70 = 1;
		const int error_71 = 1;
		const int error_73 = 1;
		const int error_75 = 1;
		const int error_77 = 1;
		const int error_79 = 1;
		const int error_81 = 1;
		const int error_84 = 1;
		const int error_85 = 1;
		const int error_89 = 1;
		const int error_91 = 1;
		const int error_92 = 1;
		const int error_96 = 1;
		const int error_98 = 1;
		 int a182 = 320; // 118, 320 || Left((a182==118))
		 int a140 = -49; // -49, -30, 0, 105, 316 || Left((a140<-29)), Left((a140<1)), Left((a140==316))
		 int a106 = 234; // [-29998, -102], [-25503, -24308], [-100, 32], [-99, 33], [-98, 34], [-20, 6], [-19, 6], [36, 222], 234 || Left((a106<-101)), Left((a106<224)), Left((a106<35)), Right((a120 * a106)), Right((a173 * a106))
		 int a104 = 1; // 1, 5 || Left((a104==1))
		 int a188 = 8; // 7, 8 || Left((a188==7))
		 int a181 = 45; // 45, 65, 228 || Left((a181==228)), Left((a181==45))
		 int cf = 1; // 0, [0, 2], 1 || Left((cf==1))
		 int a178 = 8; // 4, 5, 6, 7, 8, 9, 10, 11 || Left((a178==10)), Left((a178==11)), Left((a178==4)), Left((a178==5)), Left((a178==6)), Left((a178==7)), Left((a178==8)), Left((a178==9))
		 int a16 = 189; // [-29897, 99], [153, 183], 189 || Left((a16<153)), Left((a16<186)), Right((a120 * a16))
		 int a173 = -89; // [-30000, -80], -89, [-77, 87], [91, 225], [92, 226] || Left((a173<-77)), Left((a173<91)), Right((a120 * a173))
		 int a102 = 7; // 3, 6, 7 || Left((a102==3)), Left((a102==6)), Left((a102==7))
		 int a160 = 258; // 130, 258, 429 || Left((a160==429))
		 int a120 = 410; // [-32768, 3], [-32768, -14502], [-29997, 149], [-12078, 17918], [-9060, 20936], [-6070, -2430], [-5554, 24442], [-4999, 24997], [-3788, 26208], [-624, 5374], [-280, 1277], [-275, 29721], [69, 275], [83, 289], [113, 319], [114, 320], [127, 333], [150, 356], [171, 377], [200, 209], [216, 422], [259, 463], [272, 314], [313, 415], [314, 416], [331, 423], [336, 438], [337, 429], [347, 449], [350, 452], [351, 453], [359, 461], [374, 476], 410, [4518, 22512], [12995, 32767], [13293, 32767], [14760, 26756], [17272, 23270] || Left((a120<150)), Left((a120<359)), Left((a120<464)), Right((a106 * a120)), Right((a107 * a120)), Right((a16 * a120)), Right((a173 * a120))
		 int a117 = 3; // 1, 3 || Left((a117==1))
		 int a165 = 10; // 7, 10 || Left((a165==7))
		 int a132 = 4; // 3, 4, 5 || Left((a132==3)), Left((a132==4)), Left((a132==5))
		 int a92 = 273; // 0, 273, 22555 || Left((a92==0)), Left((a92==22555))
		 int a107 = 128; // [-29909, 87], [121, 145], 128, [131, 155], [132, 156], [144, 149] || Left((a107<130)), Right((a120 * a107)), Right((a16 * a107)), Right((a173 * a107))
		 int a116 = 8; // 4, 8, 10 || Left((a116==10)), Left((a116==4)), Left((a116==8))
		 int a89 = -79; // -79, 109 || Left((a89==-79))
		 int a109 = 5; // 1, 2, 3, 4, 5, 6, 7, 8 || Left((a109==1)), Left((a109==2)), Left((a109==3)), Left((a109==4)), Left((a109==5)), Left((a109==6)), Left((a109==7)), Left((a109==8))
		 int a94 = 9; // 9, 10, 11, 12, 15 || Left((a94==10)), Left((a94==11)), Left((a94==12)), Left((a94==15)), Left((a94==9))
		 int a83 = 13; // 6, 10, 11, 12, 13 || Left((a83==10)), Left((a83==11)), Left((a83==12)), Left((a83==13)), Left((a83==6))
		 int a95 = 14; // 8, 12, 14 || Left((a95==12)), Left((a95==14)), Left((a95==8))


	void errorCheck() {
	    if((((a120<359) && !(a120<150)) && ((a178==9) && (!(a92==22555) && !(a92==0))))){
	    cf = (0);
	    error_2: assert(!error_2);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==10) && (!(a160==429) && (a160==429))))){
	    cf = (0);
	    error_4: assert(!error_4);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==8) && (a94==10)))){
	    cf = (0);
	    error_6: assert(!error_6);
	    }
	    if((((a120<464) && !(a120<359)) && ((a106<224) && !(a106<35)))){
	    cf = (0);
	    error_8: assert(!error_8);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==9) && (a92==0)))){
	    cf = (0);
	    error_11: assert(!error_11);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==9) && (a92==22555)))){
	    cf = (0);
	    error_15: assert(!error_15);
	    }
	    if((((a120<464) && !(a120<359)) && ((a106<-101) && (a16<153)))){
	    cf = (0);
	    error_19: assert(!error_19);
	    }
	    if((!(a120<464) && ((a109==2) && ((a173<91) && !(a173<-77))))){
	    cf = (0);
	    error_22: assert(!error_22);
	    }
	    if((!(a120<464) && ((a109==6) && (a107<130)))){
	    cf = (0);
	    error_23: assert(!error_23);
	    }
	    if((!(a120<464) && ((a109==3) && !(a173<91)))){
	    cf = (0);
	    error_24: assert(!error_24);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==6) && ((a182==118) && !(a182==118))))){
	    cf = (0);
	    error_29: assert(!error_29);
	    }
	    if((((a120<464) && !(a120<359)) && (((a106<35) && !(a106<-101)) && (a83==13)))){
	    cf = (0);
	    error_33: assert(!error_33);
	    }
	    if((!(a120<464) && ((a109==4) && !(a117==1)))){
	    cf = (0);
	    error_34: assert(!error_34);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==6) && (a182==118)))){
	    cf = (0);
	    error_36: assert(!error_36);
	    }
	    if(((a120<150) && (((a140<1) && !(a140<-29)) && !(a89==-79)))){
	    cf = (0);
	    error_37: assert(!error_37);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==4) && (a181==228)))){
	    cf = (0);
	    error_39: assert(!error_39);
	    }
	    if(((a120<150) && ((a140==316) && (a188==7)))){
	    cf = (0);
	    error_40: assert(!error_40);
	    }
	    if((((a120<464) && !(a120<359)) && ((a106<-101) && !(a16<186)))){
	    cf = (0);
	    error_41: assert(!error_41);
	    }
	    if(((a120<150) && (((a140<1) && !(a140<-29)) && ((a89==-79) && !(a89==-79))))){
	    cf = (0);
	    error_42: assert(!error_42);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==5) && (a132==4)))){
	    cf = (0);
	    error_49: assert(!error_49);
	    }
	    if((((a120<464) && !(a120<359)) && (((a106<35) && !(a106<-101)) && (a83==11)))){
	    cf = (0);
	    error_52: assert(!error_52);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==9) && (!(a92==22555) && (a92==22555))))){
	    cf = (0);
	    error_55: assert(!error_55);
	    }
	    if(((a120<150) && ((!(a140==316) && !(a140<1)) && (a104==1)))){
	    cf = (0);
	    error_56: assert(!error_56);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==10) && !(a160==429)))){
	    cf = (0);
	    error_61: assert(!error_61);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==10) && (a160==429)))){
	    cf = (0);
	    error_63: assert(!error_63);
	    }
	    if((!(a120<464) && ((a109==1) && (a116==8)))){
	    cf = (0);
	    error_65: assert(!error_65);
	    }
	    if((!(a120<464) && ((a109==2) && (a173<-77)))){
	    cf = (0);
	    error_66: assert(!error_66);
	    }
	    if((!(a120<464) && ((a109==5) && (a95==8)))){
	    cf = (0);
	    error_67: assert(!error_67);
	    }
	    if(((a120<150) && ((a140==316) && !(a188==7)))){
	    cf = (0);
	    error_70: assert(!error_70);
	    }
	    if(((a120<150) && (a140<-29))){
	    cf = (0);
	    error_71: assert(!error_71);
	    }
	    if((!(a120<464) && ((a109==7) && (a102==3)))){
	    cf = (0);
	    error_73: assert(!error_73);
	    }
	    if((!(a120<464) && ((a109==1) && (a116==4)))){
	    cf = (0);
	    error_75: assert(!error_75);
	    }
	    if(((a120<150) && ((!(a140==316) && !(a140<1)) && !(a104==1)))){
	    cf = (0);
	    error_77: assert(!error_77);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==5) && (a132==3)))){
	    cf = (0);
	    error_79: assert(!error_79);
	    }
	    if((!(a120<464) && ((a109==7) && (a102==7)))){
	    cf = (0);
	    error_81: assert(!error_81);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==4) && (a181==45)))){
	    cf = (0);
	    error_84: assert(!error_84);
	    }
	    if((!(a120<464) && ((a109==4) && (a117==1)))){
	    cf = (0);
	    error_85: assert(!error_85);
	    }
	    if((((a120<464) && !(a120<359)) && (((a106<35) && !(a106<-101)) && (a83==10)))){
	    cf = (0);
	    error_89: assert(!error_89);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==7) && !(a165==7)))){
	    cf = (0);
	    error_91: assert(!error_91);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==6) && !(a182==118)))){
	    cf = (0);
	    error_92: assert(!error_92);
	    }
	    if((!(a120<464) && ((a109==5) && (a95==14)))){
	    cf = (0);
	    error_96: assert(!error_96);
	    }
	    if((((a120<359) && !(a120<150)) && ((a178==11) && (a107<130)))){
	    cf = (0);
	    error_98: assert(!error_98);
	    }
	}
 void calculate_outputm2(int input){
	if(((input==4) && (cf==1))){
		cf = (0);
		a107 = (((((((a107 * a120) % 14999) * 2) / 5) % 13) + 144)); // Range: [132, 156]
		a109 = (6);
		a120 = ((((((a120 * a120) % 14999) / 5) * 2) + 20758)); // Range: [14760, 26756]
		printf("%d\n",23);
	}
}
 void calculate_outputm1(int input){
	if(((cf==1) && (!(a181==228) && !(a181==45)))){
		calculate_outputm2(input);
	}
}
 void calculate_outputm4(int input){
	if(((input==1) && (cf==1))){
		cf = (0);
		a83 = (6);
		a106 = ((((((a106 * a120) % 14999) % 67) + -32) / 5)); // Range: [-19, 6]
		a120 = ((((((a120 * a120) % 14999) % 52) * 2) + 361)); // Range: [259, 463]
		printf("%d\n",20);
	}
}
 void calculate_outputm3(int input){
	if(((a132==5) && (cf==1))){
		calculate_outputm4(input);
	}
}
 void calculate_outputm6(int input){
	if(((input==2) && (cf==1))){
		cf = (0);
		a83 = (6);
		a106 = ((((((((a106 * a120) % 14999) % 67) * 25) + -850) % 67) + -33)); // Range: [-99, 33]
		a120 = ((((((((a120 * a120) % 14999) % 52) * 5) + 1935) % 52) + 402)); // Range: [351, 453]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		a83 = (6);
		a106 = (((((a106 * a120) % 14999) % 67) + -32)); // Range: [-98, 34]
		a120 = ((((((((a120 * a120) % 14999) % 52) * 5) + 5354) % 52) + 365)); // Range: [314, 416]
		printf("%d\n",26);
	}
}
 void calculate_outputm5(int input){
	if(((cf==1) && (a165==7))){
		calculate_outputm6(input);
	}
}
 void calculate_outputm8(int input){
	if(((input==5) && (cf==1))){
		cf = (0);
		a181 = (65);
		a178 = (4);
		printf("%d\n",20);
	}
	if(((input==4) && (cf==1))){
		cf = (0);
		a116 = (10);
		a109 = (1);
		a120 = (((((a120 * a120) % 14999) + 11874) / 5)); // Range: [-624, 5374]
		printf("%d\n",26);
	}
}
 void calculate_outputm9(int input){
	if(((cf==1) && (input==3))){
		cf = (0);
		a83 = (10);
		a106 = (((((a106 * a120) % 14999) % 67) + -34)); // Range: [-100, 32]
		a120 = ((((((a120 * a120) % 14999) + 11879) % 52) + 401)); // Range: [350, 452]
		printf("%d\n",26);
	}
	if(((cf==1) && (input==2))){
		cf = (0);
		a107 = ((((((((a107 * a120) % 14999) * 2) % 13) + 144) / 5) + 118)); // Range: [144, 149]
		a109 = (6);
		a120 = ((((((((a120 * a120) % 14999) + 9589) / 5) / 5) * 13) / 10)); // Range: [-280, 1277]
		printf("%d\n",23);
	}
	if(((input==4) && (cf==1))){
		cf = (0);
		a83 = (12);
		a106 = ((((((a106 * a120) % 14999) * 2) % 67) + -33)); // Range: [-99, 33]
		a120 = ((((((a120 * a120) % 14999) + 12089) % 52) + 387)); // Range: [336, 438]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		a188 = (7);
		a140 = (316);
		a120 = (((((a120 * a120) % 14999) * 2) + -29993)); // Range: [-32768, 3]
		printf("%d\n",26);
	}
	if(((input==1) && (cf==1))){
		cf = (0);
		a107 = ((((((((a107 * a120) % 14999) % 13) * 5) + 710) % 13) + 133)); // Range: [121, 145]
		a178 = (11);
		printf("%d\n",21);
	}
}
 void calculate_outputm10(int input){
	if(((input==3) && (cf==1))){
		cf = (0);
		a92 = (0);
		a178 = (9);
		printf("%d\n",23);
	}
	if(((cf==1) && (input==2))){
		cf = (0);
		a83 = (13);
		a106 = (((((a106 * a120) % 14999) % 67) + -34)); // Range: [-100, 32]
		a120 = ((((((((a120 * a120) % 14999) % 52) * 9) + 3591) / 10) + 24)); // Range: [337, 429]
		printf("%d\n",26);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		a132 = (5);
		a109 = (8);
		a120 = ((((a120 * a120) % 14999) + 9444)); // Range: [-5554, 24442]
		printf("%d\n",23);
	}
	if(((input==1) && (cf==1))){
		cf = (0);
		a107 = ((((a107 * a120) % 14999) + -14911)); // Range: [-29909, 87]
		a178 = (11);
		printf("%d\n",26);
	}
	if(((input==4) && (cf==1))){
		cf = (0);
		a181 = (228);
		a178 = (4);
		printf("%d\n",21);
	}
}
 void calculate_outputm11(int input){
	if(((cf==1) && (input==3))){
		cf = (0);
		a102 = (6);
		a109 = (7);
		a120 = ((((((a120 * a120) % 14999) / 5) * 3) + 13515)); // Range: [4518, 22512]
		printf("%d\n",26);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		a132 = (5);
		a109 = (8);
		a120 = ((((a120 * a120) % 14999) + 14723)); // Range: [-275, 29721]
		printf("%d\n",23);
	}
	if(((input==4) && (cf==1))){
		cf = (0);
		a173 = ((((((a173 * a120) % 14999) + 2622) % 68) + 158)); // Range: [91, 225]
		a109 = (3);
		a120 = ((((a120 * a120) % 14999) + 2920)); // Range: [-12078, 17918]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==2))){
		cf = (0);
		a83 = (12);
		a106 = (((((a106 * a120) % 14999) % 67) + -34)); // Range: [-100, 32]
		a120 = (((((a120 * a120) % 14999) % 52) + 364)); // Range: [313, 415]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==1))){
		cf = (0);
		a182 = (118);
		a178 = (6);
		printf("%d\n",23);
	}
}
 void calculate_outputm7(int input){
	if(((a94==9) && (cf==1))){
		calculate_outputm8(input);
	}
	if(((cf==1) && (a94==11))){
		calculate_outputm9(input);
	}
	if(((a94==12) && (cf==1))){
		calculate_outputm10(input);
	}
	if(((a94==15) && (cf==1))){
		calculate_outputm11(input);
	}
}
 void calculate_outputm13(int input){
	if(((cf==1) && (input==5))){
		cf = (0);
		a140 = (-30);
		a120 = ((((a120 * a120) % 14999) + -29500)); // Range: [-32768, -14502]
		printf("%d\n",23);
	}
	if(((input==2) && (cf==1))){
		cf = (0);
		a116 = (4);
		a109 = (1);
		a120 = ((((a120 * a107) % 14999) + 11210)); // Range: [-3788, 26208]
		printf("%d\n",23);
	}
	if(((input==3) && (cf==1))){
		cf = (0);
		a94 = (10);
		a178 = (8);
		printf("%d\n",26);
	}
	if(((input==1) && (cf==1))){
		cf = (0);
		a173 = (((((a173 * a107) % 14999) % 68) + 158)); // Range: [91, 225]
		a109 = (2);
		a120 = ((((a120 * a107) % 14999) + 9999)); // Range: [-4999, 24997]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		a94 = (11);
		a178 = (8);
		printf("%d\n",22);
	}
}
 void calculate_outputm12(int input){
	if(((cf==1) && !(a107<130))){
		calculate_outputm13(input);
	}
}
 void calculate_outputm15(int input){
	if(((input==3) && (cf==1))){
		cf = (0);
		a165 = (7);
		a178 = (7);
		a120 = (((((((((a120 * a120) % 14999) / 5) % 104) * 5) + 1165) % 104) + 217)); // Range: [114, 320]
		printf("%d\n",23);
	}
	if(((cf==1) && (input==1))){
		cf = (0);
		a95 = (8);
		a109 = (5);
		a120 = ((((a120 * a106) % 14999) + 28291)); // Range: [13293, 32767]
		printf("%d\n",22);
	}
	if(((input==2) && (cf==1))){
		cf = (0);
		a92 = (22555);
		a178 = (9);
		a120 = ((((((a120 * a106) % 14999) + -11761) % 104) + 274)); // Range: [171, 377]
		printf("%d\n",23);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		printf("%d\n",20);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		a102 = (3);
		a109 = (7);
		a120 = ((((a120 * a16) % 14999) + 5938)); // Range: [-9060, 20936]
		printf("%d\n",22);
	}
}
 void calculate_outputm14(int input){
	if((((a16<186) && !(a16<153)) && (cf==1))){
		calculate_outputm15(input);
	}
}
 void calculate_outputm17(int input){
	if(((cf==1) && (input==1))){
		cf = (0);
		a83 = (12);
		printf("%d\n",23);
	}
	if(((input==4) && (cf==1))){
		cf = (0);
		a165 = (7);
		a178 = (7);
		a120 = (((((((a120 * a120) % 14999) % 104) + 182) / 5) + 257)); // Range: [272, 314]
		printf("%d\n",22);
	}
}
 void calculate_outputm18(int input){
	if(((input==1) && (cf==1))){
		cf = (0);
		printf("%d\n",20);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		printf("%d\n",20);
	}
}
 void calculate_outputm16(int input){
	if(((a83==6) && (cf==1))){
		calculate_outputm17(input);
	}
	if(((a83==12) && (cf==1))){
		calculate_outputm18(input);
	}
}
 void calculate_outputm20(int input){
	if(((input==5) && (cf==1))){
		cf = (0);
		a173 = (((((a173 * a106) % 14999) % 14961) + -15040)); // Range: [-30000, -80]
		a109 = (3);
		a120 = ((((a120 * -160) % 14999) + 27993)); // Range: [12995, 32767]
		printf("%d\n",21);
	}
	if(((input==3) && (cf==1))){
		cf = (0);
		a132 = (5);
		a109 = (8);
		a120 = (((((a120 * a120) % 14999) / 5) + 20271)); // Range: [17272, 23270]
		printf("%d\n",20);
	}
}
 void calculate_outputm19(int input){
	if((cf==1)){
		calculate_outputm20(input);
	}
}
 void calculate_outputm22(int input){
	if(((cf==1) && (input==4))){
		cf = (0);
		a173 = (((((a173 * a120) % 14999) % 83) + 5)); // Range: [-77, 87]
		a109 = (3);
		printf("%d\n",22);
	}
}
 void calculate_outputm21(int input){
	if(((cf==1) && (a116==10))){
		calculate_outputm22(input);
	}
}
 void calculate_outputm24(int input){
	if(((cf==1) && (input==5))){
		cf = (0);
		a132 = (4);
		a109 = (8);
		printf("%d\n",21);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		a95 = (12);
		a109 = (5);
		printf("%d\n",22);
	}
}
 void calculate_outputm23(int input){
	if((!(a173<91) && (cf==1))){
		calculate_outputm24(input);
	}
}
 void calculate_outputm26(int input){
	if(((cf==1) && (input==5))){
		cf = (0);
		a132 = (5);
		a178 = (5);
		a120 = (((((((((a120 * a120) % 14999) + 2275) % 104) * 5) + 775) % 104) + 172)); // Range: [69, 275]
		printf("%d\n",21);
	}
}
 void calculate_outputm27(int input){
	if(((cf==1) && (input==1))){
		cf = (0);
		a116 = (10);
		a109 = (1);
		printf("%d\n",21);
	}
	if(((input==3) && (cf==1))){
		cf = (0);
		a83 = (11);
		a106 = ((((((a106 * a120) % 14999) % 67) + -35) / 5)); // Range: [-20, 6]
		a120 = (((((a120 * a173) % 14999) % 52) + 410)); // Range: [359, 461]
		printf("%d\n",23);
	}
	if(((input==5) && (cf==1))){
		cf = (0);
		a104 = (5);
		a140 = (105);
		a120 = (((((((a120 * a173) % 14999) * 2) + -2) % 15074) + -14924)); // Range: [-29997, 149]
		printf("%d\n",23);
	}
	if(((cf==1) && (input==2))){
		cf = (0);
		a160 = (429);
		a178 = (10);
		a120 = (((((a120 * a120) % 14999) % 104) + 216)); // Range: [113, 319]
		printf("%d\n",20);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		a106 = (((((a106 * a120) % 14999) % 94) + 129)); // Range: [36, 222]
		a120 = ((((((((a120 * a120) % 14999) % 52) * 5) + 1875) % 52) + 398)); // Range: [347, 449]
		printf("%d\n",23);
	}
}
 void calculate_outputm25(int input){
	if(((cf==1) && (a173<-77))){
		calculate_outputm26(input);
	}
	if((((a173<91) && !(a173<-77)) && (cf==1))){
		calculate_outputm27(input);
	}
}
 void calculate_outputm29(int input){
	if(((cf==1) && (input==3))){
		cf = (0);
		a94 = (12);
		a178 = (8);
		a120 = ((((((((a120 * a120) % 14999) % 104) * 5) + 770) % 104) + 186)); // Range: [83, 289]
		printf("%d\n",22);
	}
	if(((cf==1) && (input==1))){
		cf = (0);
		a107 = (((((a107 * a120) % 14999) % 13) + 143)); // Range: [131, 155]
		a178 = (11);
		a120 = ((((((((a120 * a120) % 14999) % 104) + 151) / 5) / 5) + 199)); // Range: [200, 209]
		printf("%d\n",21);
	}
}
 void calculate_outputm28(int input){
	if(((a95==12) && (cf==1))){
		calculate_outputm29(input);
	}
}
 void calculate_outputm31(int input){
	if(((cf==1) && (input==1))){
		cf = (0);
		printf("%d\n",23);
	}
	if(((cf==1) && (input==2))){
		cf = (0);
		a16 = ((((a16 * a107) % 14999) + -14899)); // Range: [-29897, 99]
		a106 = ((((((a106 * a120) % 14999) + -12598) % 14949) + -15050)); // Range: [-29998, -102]
		a120 = (((((((a120 * a107) % 14999) / 5) + -12312) % 52) + 425)); // Range: [374, 476]
		printf("%d\n",22);
	}
}
 void calculate_outputm30(int input){
	if((!(a107<130) && (cf==1))){
		calculate_outputm31(input);
	}
}
 void calculate_outputm33(int input){
	if(((cf==1) && (input==5))){
		cf = (0);
		a132 = (3);
		a178 = (5);
		a120 = ((((((a120 * a120) % 14999) + -27100) % 104) + 319)); // Range: [216, 422]
		printf("%d\n",23);
	}
	if(((input==1) && (cf==1))){
		cf = (0);
		a94 = (15);
		a178 = (8);
		a120 = ((((((a120 * a120) % 14999) + -11630) % 104) + 253)); // Range: [150, 356]
		printf("%d\n",22);
	}
	if(((input==2) && (cf==1))){
		cf = (0);
		a160 = (130);
		a178 = (10);
		a120 = (((((a120 * a120) % 14999) % 104) + 230)); // Range: [127, 333]
		printf("%d\n",20);
	}
	if(((input==3) && (cf==1))){
		cf = (0);
		a117 = (1);
		a109 = (4);
		printf("%d\n",23);
	}
	if(((cf==1) && (input==4))){
		cf = (0);
		a89 = (109);
		a140 = (0);
		a120 = (((((((a120 * a120) % 14999) * 10) + -216910) / 9) + -2430)); // Range: [-6070, -2430]
		printf("%d\n",26);
	}
}
 void calculate_outputm32(int input){
	if(((cf==1) && (a102==6))){
		calculate_outputm33(input);
	}
}
 void calculate_outputm35(int input){
	if(((input==3) && (cf==1))){
		cf = (0);
		a16 = (((((a16 * a120) % 14999) % 16) + 168)); // Range: [153, 183]
		a106 = ((((((((a106 * a120) % 14999) % 14949) + -15050) / 5) / 5) + -24304)); // Range: [-25503, -24308]
		a120 = ((((((((a120 * a120) % 14999) % 52) * 9) + 3618) / 10) + 16)); // Range: [331, 423]
		printf("%d\n",21);
	}
	if(((input==1) && (cf==1))){
		cf = (0);
		a102 = (6);
		a109 = (7);
		printf("%d\n",26);
	}
}
 void calculate_outputm36(int input){
	if(((cf==1) && (input==1))){
		cf = (0);
		a173 = ((((((((a173 * a120) % 14999) * 2) / 5) + -494) % 68) + 159)); // Range: [92, 226]
		a109 = (2);
		printf("%d\n",23);
	}
	if(((cf==1) && (input==5))){
		cf = (0);
		a94 = (9);
		a178 = (8);
		a120 = ((((((a120 * a120) % 14999) + -2059) % 104) + 253)); // Range: [150, 356]
		printf("%d\n",21);
	}
}
 void calculate_outputm34(int input){
	if(((cf==1) && (a132==4))){
		calculate_outputm35(input);
	}
	if(((a132==5) && (cf==1))){
		calculate_outputm36(input);
	}
}
 void calculate_output(int input){
	cf = (1);
	if(((cf==1) && ((a120<359) && !(a120<150)))){
		if(((cf==1) && (a178==4))){
			calculate_outputm1(input);
		}
		if(((cf==1) && (a178==5))){
			calculate_outputm3(input);
		}
		if(((cf==1) && (a178==7))){
			calculate_outputm5(input);
		}
		if(((a178==8) && (cf==1))){
			calculate_outputm7(input);
		}
		if(((cf==1) && (a178==11))){
			calculate_outputm12(input);
		}
	}
	if((((a120<464) && !(a120<359)) && (cf==1))){
		if(((cf==1) && (a106<-101))){
			calculate_outputm14(input);
		}
		if((((a106<35) && !(a106<-101)) && (cf==1))){
			calculate_outputm16(input);
		}
		if(((cf==1) && !(a106<224))){
			calculate_outputm19(input);
		}
	}
	if(((cf==1) && !(a120<464))){
		if(((cf==1) && (a109==1))){
			calculate_outputm21(input);
		}
		if(((a109==2) && (cf==1))){
			calculate_outputm23(input);
		}
		if(((a109==3) && (cf==1))){
			calculate_outputm25(input);
		}
		if(((a109==5) && (cf==1))){
			calculate_outputm28(input);
		}
		if(((cf==1) && (a109==6))){
			calculate_outputm30(input);
		}
		if(((cf==1) && (a109==7))){
			calculate_outputm32(input);
		}
		if(((a109==8) && (cf==1))){
			calculate_outputm34(input);
		}
	}
	errorCheck();
	if((cf==1))fprintf(stderr, "Invalid input: %d\n", input);
}


int main()
{
    //srand((unsigned)time(NULL));
    // main i/o-loop
    while(1)
    {
        // read input
        int input;
        scanf("%d", &input);        
        // operate eca engine
        calculate_output(input);
    }
}
