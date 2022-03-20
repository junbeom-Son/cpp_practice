#include <iostream>
#include "SpreadsheetCell.h"
#include <memory>

using namespace std;


int main() {
	SpreadsheetCell aThirdCell("test");
	SpreadsheetCell aFourthCell(4.4);
	auto aFifthCellp = make_unique<SpreadsheetCell>("5.5");

	cout << "aThirdCell: " << aThirdCell.getValue() << endl;
	cout << "aFourthCell: " << aFourthCell.getValue() << endl;
	cout << "aFifthCellp: " << aFifthCellp->getValue() << endl;
	return 0;
}