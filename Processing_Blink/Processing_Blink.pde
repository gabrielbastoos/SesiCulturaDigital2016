import processing.serial.*; // Importa bibliotecas para Serial
Serial port; // Inicia a váriavel do tipo Serial chamada port
void setup(){
  
  size(200,200); // Define tamanho da janela

  port = new Serial(this, "COM3", 9600);  // Inicia porta serial na COM3 a 9600 bauds
}
void draw(){
  
  while (port.available() > 0){   // Enquanto receber algo pela serial
  background(255);   // Define o fundo branco
  if (port.read() == '1'){      // Se recebeu 1 da Serial
  fill(#00ff00);     // Define cor da elipse (verde)
  ellipse(100,100,100,100);    // Cria uma elipse (posX, posY, largura,altura)
}

else{ // Se recebeu qualquer coisa diferente de 1

  fill(255);    // Insere fundo branco na ellipse
  ellipse(100,100,100,100);   // Redesenha a ellipse
}

}

}