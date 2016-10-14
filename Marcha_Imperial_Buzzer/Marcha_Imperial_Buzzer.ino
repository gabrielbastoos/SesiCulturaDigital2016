int led = 13;
 
int buzzer = 11;     //buzzer conectado a uma porta PWM do arduino
 
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

//frequencia das notas que iremos usar
//http://home.mit.bme.hu/~bako/tonecalc/tonecalc.htm
 
void setup()
{
  pinMode(led, OUTPUT);
  
  pinMode(buzzer, OUTPUT);
 
}
 
void loop()
{
  ImperialMarch();
}

 
void beep (unsigned char buzzer, int frequencia, long timeInMilliseconds)
{
    digitalWrite(led, HIGH);
    //use o led para visualizar as notas sendo tocadas
 
    int x;
    long delayAmount = (long)(1000000/frequencia);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++)   
    {
        digitalWrite(buzzer,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(buzzer,LOW);
        delayMicroseconds(delayAmount);
    }
 
    digitalWrite(led, LOW);
     
    delay(20);
    //delay entre as notas
}
 
void ImperialMarch()
{
    //http://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0016254    -- partitura da melodia
    //isto é uma traducao da partitura em frequencia para intervalos de tempo / tempo em ns
    //usamos 500ms=0,5s para um quarto de nota
 
    beep(buzzer, a, 500);
    beep(buzzer, a, 500);
    beep(buzzer, a, 500);
    beep(buzzer, f, 350);
    beep(buzzer, cH, 150);
 
    beep(buzzer, a, 500);
    beep(buzzer, f, 350);
    beep(buzzer, cH, 150);
    beep(buzzer, a, 1000);
 
    beep(buzzer, eH, 500);
    beep(buzzer, eH, 500);
    beep(buzzer, eH, 500);
    beep(buzzer, fH, 350);
    beep(buzzer, cH, 150);
 
    beep(buzzer, gS, 500);
    beep(buzzer, f, 350);
    beep(buzzer, cH, 150);
    beep(buzzer, a, 1000);
 
    beep(buzzer, aH, 500);
    beep(buzzer, a, 350);
    beep(buzzer, a, 150);
    beep(buzzer, aH, 500);
    beep(buzzer, gSH, 250);
    beep(buzzer, gH, 250);
 
    beep(buzzer, fSH, 125);
    beep(buzzer, fH, 125);
    beep(buzzer, fSH, 250);
    delay(250);
    beep(buzzer, aS, 250);
    beep(buzzer, dSH, 500);
    beep(buzzer, dH, 250);
    beep(buzzer, cSH, 250);
 
    beep(buzzer, cH, 125);
    beep(buzzer, b, 125);
    beep(buzzer, cH, 250);
    delay(250);
    beep(buzzer, f, 125);
    beep(buzzer, gS, 500);
    beep(buzzer, f, 375);
    beep(buzzer, a, 125);
 
    beep(buzzer, cH, 500);
    beep(buzzer, a, 375);
    beep(buzzer, cH, 125);
    beep(buzzer, eH, 1000);
 
    beep(buzzer, aH, 500);
    beep(buzzer, a, 350);
    beep(buzzer, a, 150);
    beep(buzzer, aH, 500);
    beep(buzzer, gSH, 250);
    beep(buzzer, gH, 250);
 
    beep(buzzer, fSH, 125);
    beep(buzzer, fH, 125);
    beep(buzzer, fSH, 250);
    delay(250);
    beep(buzzer, aS, 250);
    beep(buzzer, dSH, 500);
    beep(buzzer, dH, 250);
    beep(buzzer, cSH, 250);
 
    beep(buzzer, cH, 125);
    beep(buzzer, b, 125);
    beep(buzzer, cH, 250);
    delay(250);
    beep(buzzer, f, 250);
    beep(buzzer, gS, 500);
    beep(buzzer, f, 375);
    beep(buzzer, cH, 125);
 
    beep(buzzer, a, 500);
    beep(buzzer, f, 375);
    beep(buzzer, c, 125);
    beep(buzzer, a, 1000);
}
