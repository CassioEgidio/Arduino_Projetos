int verde1 = 13;
int vermelho1 = 12;
int azul1 = 11;
int amarelo1 = 10;
int verde2 = 9;
int vermelho2 = 8;
int azul2 = 7;
int amarelo2 = 6;
int verde3 = 5;
int vermelho3 = 4;

void setup()
{
  pinMode(verde1, OUTPUT);
  pinMode(vermelho1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(vermelho3, OUTPUT);
}

void loop()
{
  int i =0;
  for(i = 0;i<3;i++) {
    digitalWrite(verde1, HIGH);
    delay(300); 
    digitalWrite(verde1, LOW);
    delay(300);
    
    digitalWrite(azul1, HIGH);
    delay(300); 
    digitalWrite(azul1, LOW);
    delay(300);
    
    digitalWrite(verde2, HIGH);
    delay(300); 
    digitalWrite(verde2, LOW);
    delay(300);
    
    digitalWrite(azul2, HIGH);
    delay(300); 
    digitalWrite(azul2, LOW);
    delay(300);
    
    digitalWrite(verde3, HIGH);
    delay(300); 
    digitalWrite(verde3, LOW);
    delay(300);
    //outro
    digitalWrite(vermelho1, HIGH);
    delay(300); 
    digitalWrite(vermelho1, LOW);
    delay(300);
    
    digitalWrite(amarelo1, HIGH);
    delay(300); 
    digitalWrite(amarelo1, LOW);
    delay(300);
    
    digitalWrite(vermelho2, HIGH);
    delay(300); 
    digitalWrite(vermelho2, LOW);
    delay(300);
    
    digitalWrite(amarelo2, HIGH);
    delay(300); 
    digitalWrite(amarelo2, LOW);
    delay(300);
    
    digitalWrite(vermelho3, HIGH);
    delay(300); 
    digitalWrite(vermelho3, LOW);
    delay(300);
  }
  for(i = 0;i<3;i++) {
    digitalWrite(vermelho3, HIGH);
    delay(300); 
    digitalWrite(vermelho3, LOW);
    delay(300);
    
    digitalWrite(verde3, HIGH);
    delay(300); 
    digitalWrite(verde3, LOW);
    delay(300);
    
    digitalWrite(amarelo2, HIGH);
    delay(300); 
    digitalWrite(amarelo2, LOW);
    delay(300);
    
    digitalWrite(azul2, HIGH);
    delay(300); 
    digitalWrite(azul2, LOW);
    delay(300);
    
    digitalWrite(vermelho2, HIGH);
    delay(300); 
    digitalWrite(vermelho2, LOW);
    delay(300);
    
    digitalWrite(verde2, HIGH);
    delay(300); 
    digitalWrite(verde2, LOW);
    delay(300);
    
    digitalWrite(amarelo1, HIGH);
    delay(300); 
    digitalWrite(amarelo1, LOW);
    delay(300);
    
    digitalWrite(azul1, HIGH);
    delay(300); 
    digitalWrite(azul1, LOW);
    delay(300);
    
    digitalWrite(vermelho1, HIGH);
    delay(300); 
    digitalWrite(vermelho1, LOW);
    delay(300);
    
    digitalWrite(verde1, HIGH);
    delay(300);
    digitalWrite(verde1, LOW);
    delay(300);
    

  }
  for(i = 0;i<3;i++) {
    digitalWrite(verde1, HIGH);
    delay(300);
    digitalWrite(verde1, LOW);
    delay(300);
    
    digitalWrite(vermelho1, HIGH);
    delay(300); 
    digitalWrite(vermelho1, LOW);
    delay(300);
    
    digitalWrite(azul1, HIGH);
    delay(300); 
    digitalWrite(azul1, LOW);
    delay(300);
    
    digitalWrite(amarelo1, HIGH);
    delay(300); 
    digitalWrite(amarelo1, LOW);
    delay(300);
    
    digitalWrite(verde2, HIGH);
    delay(300); 
    digitalWrite(verde2, LOW);
    delay(300);
    
    digitalWrite(vermelho2, HIGH);
    delay(300); 
    digitalWrite(vermelho2, LOW);
    delay(300);
    
    digitalWrite(azul2, HIGH);
    delay(300); 
    digitalWrite(azul2, LOW);
    delay(300);
    
    digitalWrite(amarelo2, HIGH);
    delay(300); 
    digitalWrite(amarelo2, LOW);
    delay(300);
    
    digitalWrite(verde3, HIGH);
    delay(300); 
    digitalWrite(verde3, LOW);
    delay(300);
    
    digitalWrite(vermelho3, HIGH);
    delay(300); 
    digitalWrite(vermelho3, LOW);
    delay(300);
  }
}