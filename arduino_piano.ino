int sound = 13;
int Cl,D,E,F,G,A,B,Ch;

#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
#define NOTE_C6  1047

void setup()
{
  pinMode(sound, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);  
}

void loop()
{ 
  Cl = digitalRead(2);
  D = digitalRead(3);
  E = digitalRead(4);
  F = digitalRead(5);
  G = digitalRead(6);
  A = digitalRead(7);
  B = digitalRead(8);
  Ch = digitalRead(9);
  
  if (Cl == 1){
    tone(sound, NOTE_C5);
  }else if(D == 1){
    tone(sound, NOTE_D5);
  }else if(E == 1){
    tone(sound, NOTE_E5);
  }else if(F == 1){
    tone(sound, NOTE_F5);
  }else if(G == 1){
    tone(sound, NOTE_G5);
  }else if(A == 1){
    tone(sound, NOTE_A5);
  }else if(B == 1){
    tone(sound, NOTE_B5);
  }else if(Ch == 1){
    tone(sound, NOTE_C6);
  }else{
    noTone(sound);
  }
}
