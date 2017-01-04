#include <iostream>
#include "hashmapper.cc"
int main() {
	std::string translate;
	for(;;){
		std::cout << "Type a word: ";
		getline(std::cin,translate);
		if(translate == "_cheaptrick_"){
			if(vowels[5] == 'y'){
				setCheapTrick();
				std::cout<<"Activated Cheap Trick Reserved for Noobs"<<std::endl;
			} else {
				unsetCheapTrick();
				std::cout<<"I see you reconsidered."<<std::endl;
			}
		} else {
			break;
		}
	}
	int sum=0;
	std::cout<<translate<<" = ";
	for(int i = 0; i<translate.length(); i++){
		if (translate[i] == ' '){
				std::cout<<"  +  ";
				continue;
		}
		int letv = lettervalue(translate[i]);
		sum+=letv;
		if(i != 0) std::cout<<" + ";
		std::cout<<letv;
	}
	std::cout<<" = "<<sum<<std::endl;
	int mod10 = sum % 10;
	std::cout<<sum<<" % 10 = "<<mod10<<std::endl;
	std::cout<<"the "<<translate<<" is captchalogued in card "<<mod10<<std::endl;
    return 0;
}
