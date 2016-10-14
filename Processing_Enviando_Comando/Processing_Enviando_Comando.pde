import processing.serial.*; // Importa bibliotecas para Serial
Serial port; // Inicia a váriavel do tipo Serial chamada port
void setup(){
  
  size(400,400); // Define tamanho da janela

  port = new Serial(this, "COM3", 9600);  // Inicia porta serial na COM3 a 9600 bauds

}
void draw(){
  
  while (port.available() > 0){   // Enquanto receber algo pela serial

  int byteRecebido = port.read();
  char novoByte = (char) byteRecebido;
  print(novoByte);
  
  desenhaBotao();

}
}

void desenhaBotao(){
  background(255); // Define o fundo branco

  fill(#000000);  // Preenche com preto
  rect(30, 150, 60, 100);     // Cria botão para desligar o led
  fill(#000000);  // Preenche com preto
  rect(300, 150, 60, 100);    // Cria botão para ligar o led
  
}

boolean botaoDesligar(){
  if (mouseX > 300 && mouseX < 300 + 60 && mouseY > 150 && mouseY < 150 + 100) 
  {
    return true;
  }
  else
  {
    return false;
  }
}

boolean botaoLigar(){
  if (mouseX > 30 && mouseX < 30 + 60  && mouseY > 150 && mouseY < 150 + 100) 
  {
    return true;
  }
  else
  {
    return false;
  }
}

void mousePressed() {
  println(" ");
  println("Coordenada x: " + mouseX + " e y: " + mouseY);
  if (botaoLigar())
  {
    println("Clicou no botao de ligar o led");
    port.write(1);// Envia código 1 para Arduino
    println("Enviado codigo 1");
  }
    if (botaoDesligar())
  {
    println("Clicou no botao de desligar o led");
    port.write(0);// Envia código 1 para Arduino
    println("Enviado codigo 0");
  }
}