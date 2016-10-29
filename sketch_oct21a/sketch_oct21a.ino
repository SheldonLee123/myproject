int ledPin=5;//设定控制LED的数字IO脚
void setup(){
  pinMode(ledPin,OUTPUT);//设定数字IO口的模式，OUTPUT为输出
}
void loop(){
  digitalWrite(ledPin,HIGH);//设定PIN5脚为HIGH=5v左右
  delay(3000);//设定延时时间，2000=2秒
  digitalWrite(ledPin,LOW);//设定PIN5脚为LOW=0v
  delay(3000);//设定延时时间，2000=2秒
}

