
#define S1 2
#define S2 3
#define S3 18
#define S4 19
#define S5 16
#define S6 17
#define S7 20
#define C1S1 21
#define C1S2 23
#define C2S1 25
#define C2S2 27
#define red 26
#define orange 30 
#define green 28
#define Airsuction 8
#define RL 5 
#define Cylinder1 9
#define Cylinder2 46 
#define Airgripper 22
#define TN1 7
#define TN2 24
#define Con1 4
#define Con2 6
#define Con3 10

int b=1;

void setup() {
  // put your setup code here, to run once:
pinMode(S1,INPUT);
pinMode(S2,INPUT);
pinMode(S3,INPUT);
pinMode(S4,INPUT);
pinMode(S5,INPUT);
pinMode(S6,INPUT);
pinMode(S7,INPUT);
pinMode(C1S1,INPUT);
pinMode(C1S2,INPUT);
pinMode(C2S1,INPUT);
pinMode(C2S2,INPUT);

pinMode(red,OUTPUT);
pinMode(orange,OUTPUT);
pinMode(green,OUTPUT);
pinMode(Airsuction,OUTPUT);
pinMode(RL,OUTPUT);
pinMode(Cylinder1,OUTPUT);
pinMode(Cylinder2,OUTPUT);
pinMode(Airgripper,OUTPUT);
pinMode(TN1,OUTPUT);
pinMode(TN2,OUTPUT);
pinMode(Con1,OUTPUT);
pinMode(Con2,OUTPUT);
pinMode(Con3,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  

if(b==1){
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  digitalWrite(orange,HIGH);
  digitalWrite(Airsuction,HIGH);
  digitalWrite(RL,HIGH);
  digitalWrite(Cylinder1,HIGH);
  digitalWrite(Cylinder2,HIGH);
  digitalWrite(Airgripper,HIGH);
  digitalWrite(TN1,HIGH);
  digitalWrite(TN2,HIGH);
  digitalWrite(Con1,HIGH);
  digitalWrite(Con2,HIGH);
  digitalWrite(Con3,HIGH);
  b=2;
}

if(b==2){
  if(digitalRead(S1)==0){
  b=3;
  }
}

if(b==3){
  delay(2000);
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(Con1,LOW);
  b=4;
}
if(b==4){
  if(digitalRead(S2)==1){
  b=5;
}
}

if(b==5){
  digitalWrite(Con1,HIGH);
  digitalWrite(orange,LOW);
  delay(5000);
  digitalWrite(Con1,LOW);
  digitalWrite(orange,HIGH);
  b=6;
}

if(b==6){
  if(digitalRead(S3)==0){
  b=7;
}
}

if(b==7){
  digitalWrite(Con1,HIGH);
  delay(2000);
  digitalWrite(RL,LOW);
  delay(2000);
  digitalWrite(TN1,LOW);
  delay(2000);
  digitalWrite(Airsuction,LOW);
  delay(2000);
  digitalWrite(TN1,HIGH);
  delay(2000);
  digitalWrite(RL,HIGH);
  delay(2000);
  digitalWrite(TN1,LOW);
  delay(2000);
  digitalWrite(Airsuction,HIGH);
  delay(2000);
  digitalWrite(TN1,HIGH);
  delay(2000);
  b=8;
}

if(b==8){
  if(digitalRead(S4)==0){
    b=9;
  }
}

if(b==9){
  delay(2000);
  digitalWrite(Con2,LOW);
  b=10;
}

if(b==10){
  if(digitalRead(S5)==0){
    b=11;
  }
}

if(b==11){
  delay(350);
  digitalWrite(Con2,HIGH);
  b=12;
}

if(b==12){
  if(digitalRead(C1S1)==0&&digitalRead(C2S1)==0){
    b=13;
  }
}


if(b==13){
  delay(2000);
  digitalWrite(Cylinder2,LOW);
  b=14;
}

if(b==14){
  if(digitalRead(C2S2)==0){
    b=15;
  }
}

if(b==15){
  delay(2000);
  digitalWrite(Airgripper,LOW);
  delay(2000);
  digitalWrite(Cylinder2,HIGH);
  b=16;
}

if(b==16){
  if(digitalRead(C2S1)==0){
    b=17;
  }
}

if(b==17){
  delay(2000);
  digitalWrite(Cylinder1,LOW);
  b=18;
}

if(b==18){
  if(digitalRead(C1S2)==0){
    b=19;
  }
}


if(b==19){
  delay(2000);
  digitalWrite(Cylinder2,LOW);
  b=20;
}

if(b==20){
  if(digitalRead(C2S2)==0){
    b=21;
  }
}

if(b==21){
  delay(2000);
  digitalWrite(Airgripper,HIGH);
  delay(2000);
  digitalWrite(Cylinder2,HIGH);
  b=22;
}

if(b==22){
  if(digitalRead(C2S1)==0){
    b=23;
  }
}

if(b==23){
  delay(2000);
  digitalWrite(orange,LOW);
  delay(5000);
  digitalWrite(orange,HIGH);
  digitalWrite(Cylinder2,LOW);
  b=24;
}

if(b==24){
  if(digitalRead(C2S2)==0){
    b=25;
  }
}

if(b==25){
  delay(2000);
  digitalWrite(Airgripper,LOW);
  delay(2000);
  digitalWrite(Cylinder2,HIGH);
  b=26;
}

if(b==26){
  if(digitalRead(C2S1)==0){
    b=27;
  }
}

if(b==27){
  delay(2000);
  digitalWrite(Cylinder1,HIGH);
  b=28;
}

if(b==28){
  if(digitalRead(C1S1)==0){
    b=29;
  }
}

if(b==29){
  delay(2000);
  digitalWrite(Cylinder2,LOW);
  b=30;
}

if(b==30){
  if(digitalRead(C2S2)==0){
    b=31;
  }
}

if(b==31){
  delay(2000);
  digitalWrite(Airgripper,HIGH);
  delay(2000);
  digitalWrite(Cylinder2,HIGH);
  b=32;
}

if(b==32){
  if(digitalRead(C2S1)==0){
    b=33;
  }
}

if(b==33){
  delay(2000);
  digitalWrite(Con2,LOW);
  b=34;
}

if(b==34){
  if(digitalRead(S6)==0){
    b=35;
  }
}

if(b==35){
  delay(200);
  digitalWrite(Con2,HIGH);
  delay(2000);
  digitalWrite(TN2,LOW);
  delay(2000);
  digitalWrite(TN2,HIGH);
  delay(2000);
  digitalWrite(Con3,LOW);
  b=36;
}

if(b==36){
  if(digitalRead(S7)==1){
    b=1;
  }
}













}
