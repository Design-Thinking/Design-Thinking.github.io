#include "HX711.h"					//调用24bitAD HX711库

HX711 HX711_CH0(10, 11, 750); //SCK,DT,GapValue
//SCK引脚用于arduino和HX711模块通讯的时序提供
//DT引脚用于从HX711读取AD的数据
//GapValue用于校准输出的重量值，如果数值偏大就加大该值，如果数据偏小就减小该值
int LED = 13;


long Weight1 = 0;		//定义一个变量用于存放承重的重量，单位为g
long Weight2 = 0;  
void one_minute(int x) {
    for (int value = 255; value > 0; value = value - 1)
    {
      analogWrite(x, value);
      delay(35);
    }
    analogWrite(x, 0);
    digitalWrite(x,LOW);
}
int count=1;
//void(* resetFunc) (void) = 0;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
//pinMode(2, INPUT);
  
  pinMode(LED, OUTPUT);				//设定LED是输出引脚
  digitalWrite(LED, LOW);			//LED熄灭

  Serial.begin(9600);						//设定串口输出波特率
  //Serial.print("Welcome to use!\n");

  HX711_CH0.begin();					//读取传感器支架毛重
  delay(3000);								//延时3s用于传感器稳定
  HX711_CH0.begin();					//重新读取传感器支架毛重用于后续计算

  digitalWrite(LED, HIGH);		//板载LED点亮，说明可以承重

    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(9, 255);
   // digitalWrite(2, LOW);
    
    //attachInterrupt( digitalPinToInterrupt(2) , change1,LOW);
}
//void change1(){
//  resetFunc();
//  }
//  pinMode(2, OUTPUT);
//digitalWrite(2, LOW);
void loop()
{
     Weight1 = HX711_CH0.Get_Weight();		//采样当前传感器重量，该重量已经自动去皮，去皮值根据初始化程序中采样的值计算
     delay(1000);
      Weight2 = HX711_CH0.Get_Weight();
      if(Weight1==Weight2){
    //Serial.print(Weight);			//串口输出当前重量
  // Serial.println("g ");			//单位为g
   //Serial.print(count);
//    delay(1000);  
    if(count){
     if(Weight1>100){
       
    one_minute(3);
    one_minute(5);
    one_minute(6);
    one_minute(9);
    count=0;
    //digitalWrite(2, HIGH);
      }
    }
      }

}
