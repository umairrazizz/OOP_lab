// The Magic 8-Ball is a super popular toy used for fortune-telling or seeking advice, developed in the 1950s!
#include<iostream>
#include<cstdlib>
int main()
{
  int num;
  std::srand(std::time(0));
  num = std::rand() % 20 + 1;
  switch(num)
  {
    case 1 :
      std::cout<<"It is certain";
      break;
    case 2 :
      std::cout<<"It is decidedly so";
      break;
    case 3 :
      std::cout<<"Without a doubt";
      break;
    case 4 :
      std::cout<<"Yes - definitely";
      break;
    case 5 :
      std::cout<<"You may rely on it";
      break;
    case 6 :
      std::cout<<"As I see it, yes";
      break;
    case 7 :
      std::cout<<"Most likely";
      break;
    case 8 :
      std::cout<<"Outlook good";
      break;
    case 9 :
      std::cout<<"Yes";
      break;
    case 10 :
      std::cout<<"Signs point to yes";
      break;
    case 11 :
      std::cout<<"Reply hazy, try again";
      break;
    case 12 :
      std::cout<<"Ask again later";
      break;
    case 13 :
      std::cout<<"Better not tell you now";
      break;
    case 14 :
      std::cout<<"Cannot predict now";
      break;
    case 15 :
      std::cout<<"Concentrate and ask again";
      break;
    case 16 :
      std::cout<<"Don't count on it";
      break;
    case 17 :
      std::cout<<"My reply is no";
      break;
    case 18 :
      std::cout<<"My sources say no";
      break;
    case 19 :
      std::cout<<"Outlook not so good";
      break;
    case 20 :
      std::cout<<"Very doubtful";
      break;
    default :
      std::cout<<"try again";
  }
  std::cout<<"\n";
  return 0;
}
