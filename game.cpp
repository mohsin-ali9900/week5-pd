#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int,int);
void printmaze();
void playerMove(int x,int y);
void playermovee(int x,int y);

main()
{
	system("cls");
	printmaze();
	int x=8;
	int y=6;
	while(true)
	{
	  playerMove(x,y);
	  if(y<20)
	  {
		y=y+1;
	 }
	  if(y==20)
	  {
		gotoxy(x,y-1);
		cout<<"  ";
		y=6; //it represemt that it will again start from y6
	  }
	}

}

void printmaze()
{
cout <<"   |&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|         "<<endl;
cout <<"   |&&             |%%|                           |%%|                                 &&|        "<<endl;
cout <<"   |&&  @ * * *    |%%|                           |%%|       *     *       *     *     &&|         "<<endl;
cout <<"   |&&        *    |%%|                           |%%|                                 &&|         "<<endl;
cout <<"   |&&             |%%|       |%%%%%%%%%%|        |%%|       *   %%%%%%%%%|            &&|         "<<endl;
cout <<"   |&&        *                                                        |%%|            &&|         "<<endl;
cout <<"   |&&                                                       *         |%%|            &&|         "<<endl;
cout <<"   |&&        *  *  *  *   *    *   *   *                              |%%|            &&|         "<<endl;
cout <<"   |&&                                                                 |%%|            &&|         "<<endl;
cout <<"   |&&                    |%%%%%%%|     *     |%%%%%%%%%|              |%%|            &&|         "<<endl;
cout <<"   |&&                    |%%|                       |%%|                              &&|         "<<endl;
cout <<"   |&&                    |%%|    *     *        *   |%%|                              &&|         "<<endl;
cout <<"   |&&     |%%%%%|        |%%|                       |%%|                              &&|         "<<endl;
cout <<"   |&&     |%%|       *   |%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|            |%%%%%%%%%%%|  *  &&|         "<<endl;
cout <<"   |&&     |%%|                                                  *   |%%|              &&|         "<<endl;
cout <<"   |&&     |%%|       *                                              |%%|              &&|         "<<endl;
cout <<"   |&&     |%%|                           |%%%%%%%%%%%%%%%%%|        |%%|     *     *  &&|         "<<endl;
cout <<"   |&&     |%%|       *                   |%%|                       |%%|              &&|         "<<endl;
cout <<"   |&&     |%%|                           |%%|     *      *      *   |%%|     *        &&|         "<<endl;
cout <<"   |&&     |%%|  *    *                   |%%|                       |%%|              &&|         "<<endl;
cout <<"   |&&     |%%%%%%%%%%%%%%%%%|            |%%|     *                 |%%|     *        &&|         "<<endl;
cout <<"   |&&                                    |%%|          |%%%%%%%%%%%%%%%|              &&|         "<<endl;
cout <<"   |&&                                    |%%|     *      *      *       *    *        &&|         "<<endl;
cout <<"   |&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|         "<<endl;
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x,int y)
{

  gotoxy(x,y-1);
  cout<<"  ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
}
