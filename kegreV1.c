#include <stdlib.h>
#include <stdio.h>


void test(int a){

     int i = a;
     while(i>0){
            if(i>=9000 && i<10000){
                    printf("𝚯");
                    i-=9000;
                }
            if(i>=8000 && i<9000){
                    printf("H");
                    i-=8000;
                }
            if(i>=7000 && i<8000){
                    printf("Z");
                    i-=7000;
                }
            if(i>=6000 && i<7000){
                    printf("Ϛ");
                    i-=6000;
                }
            if(i>=5000 && i<6000){
                    printf("E");
                    i-=5000;
                }
            if(i>=4000 && i<5000){
                    printf("Δ");
                    i-=4000;
                }
            if(i>=3000 && i<4000){
                    printf("Γ");
                    i-=3000;
                }
            if(i>=2000 && i<3000){
                    printf("B");
                    i-=2000;
                }
            if(i>=1000 && i<2000){
                    printf("A");
                    i-=1000;
                }
            if(i>=900 && i<1000){
                    printf("ϡ");
                    i-=900;
                }
            if(i>=800 && i<900){
                    printf("ω");
                    i-=800;
                }
            if(i>=700 && i<800){
                    printf("ψ");
                    i-=700;
                }
            if(i>=600 && i<700){
                    printf("χ");
                    i-=600;
                }
            if(i>=500 && i<600){
                    printf("φ");
                    i-=500;
                }
            if(i>=400 && i<500){
                    printf("υ");
                    i-=400;
                }
            if(i>=300 && i<400){
                    printf("τ");
                    i-=300;
                }
            if(i>=200 && i<300){
                    printf("σ");
                    i-=200;
                }
            if(i>=100 && i<200){
                    printf("ρ");
                    i-=100;
                }
            if(i>=90 && i<100){
                    printf("ϟ");
                    i-=90;
                }
            if(i>=80 && i<90){
                    printf("π");
                    i-=80;
                }
            if(i>=70 && i<80){
                    printf("ο");
                    i-=70;
                }
            if(i>=60 && i<70){
                    printf("ξ");
                    i-=60;
                }
            if(i>=50 && i<60){
                    printf("ν");
                    i-=50;
                }
            if(i>=40 && i<50){
                    printf("μ");
                    i-=40;
                }
            if(i>=30 && i<40){
                    printf("λ");
                    i-=30;
                }    
            if(i>=20 && i<30){
                    printf("κ");
                    i-=20;
                }
            if(i>=10 && i<20){
                    printf("ι");
                    i-=10;
                }
            if(i==9){
                    printf("θ");
                    i-=9;
                 }
            if(i==8){
                    printf("η");
                    i-=8;
                }
            if(i==7){
                    printf("ζ");
                    i-=7;
                }
            if(i==6){
                    printf("ϛ");
                    i-=6;
                }
            if(i==5){
                    printf("ε");
                    i-=5;
                }
            if(i==4){
                    printf("δ");
                    i-=4;
                }
            if(i==3){
                    printf("γ");
                    i-=3;
                }
            if(i==2){
                    printf("β");
                    i-=2;
                }
            if(i==1){
                    printf("α");
                    i-=1;
                }
        }
    printf("\n");
}
int main(){
    test(9999);
    return 0;
    }
    
