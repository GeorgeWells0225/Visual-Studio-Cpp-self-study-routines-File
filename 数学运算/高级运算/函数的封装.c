#include<stdlib.h>



  void notepad()
{
	system("notepad");//将其封装

}


  void calc()
{
	system("calc");
}

   void main()
{
	notepad();//直接调用
	calc();
}