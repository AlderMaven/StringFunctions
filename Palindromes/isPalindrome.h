//Created by Brandon Barnes
//Simple Palindromic checker for c++ using stack

#include<stack>
#include<iostream>
#include<stdlib.h>


using namespace std;

class PalindromicChecker{
	public:
	bool isPalindrome(string candidate){
		
		int length = candidate.length();
		if(length == 0){
			return false;
		}
		else if(length == 1){
			return true;
		}
		else if(length%2){
			return this->palindromeHelper(candidate, length, false);
		}
		else{
			return this->palindromeHelper(candidate, length, true);
		}
		
	}

	private:
	bool palindromeHelper(string candidate, int length, bool isEven){
		stack<char> charStack;
		if(isEven){
			for(int i = 0; i<=length/2-1;i++){
				charStack.push(candidate[i]);
			}
			cout << endl;
			for(int i = length/2; i<length;i++){
				if(candidate[i] == charStack.top()){
				}
				else{
					return false;
				}
				charStack.pop();
			}
		}
		else{	
			for(int i = 0; i<=length/2;i++){
				charStack.push(candidate[i]);
			}
			charStack.pop();
			for(int i = length/2+1; i<length;i++){
				if(candidate[i] != charStack.top()){
					return false;
				}
				charStack.pop();
			}
		}
		return true;
	}
};

