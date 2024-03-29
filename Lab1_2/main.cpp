#include <stdio.h>

#include <iostream>
#include <string>

#include "/root/Study/TIMP/Lab1_2/Encryptor.h"


using namespace std;

/*
 * Маршрут записи: по горизонтали слева направо, сверху вниз.
 * Маршрут считывания: сверху вниз, справа налево.
 */

string encrypt(string in, const int key);
string decrypt(string in, const int key);

int main(int argc, char **argv)
{

	Encryptor enc;
	int COLS = 10;

	string public_message = "AAAAAAAAAABBBBBBBBBBCCCCCCCCCCDDDDDDDDDDEEEEE";
	string privat_message = enc.encrypt(public_message, COLS);
	string decode_message = enc.decrypt(privat_message, COLS);

	cout << public_message << endl;
	cout << privat_message << endl;
	cout << decode_message << endl;

	return 0;
}