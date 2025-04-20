#include <iostream>
#include <iomanip>
using namespace std;


/*
• Cement = 400 bags / 1000 sq ft. 
• Sand = 81.6 Tons / 1000 sq ft.
• Steel = 4000 kg / 1000 sq ft.
• Paint = 180 Liters / 1000 sq ft. 
• Bricks = 8000 Pcs / 1000 sq ft.
• Tiles = 325 Pcs / 1000 sq ft.
*/


void buildingMaterialsEstimator(float, float, float, float, float, float, float);



main() {
	float sqftAr, cemPr, sndPr, stlPr, pntPr, brkPr, tlePr;
	
	cout <<"\n-------------Building Materials & Cost Estimator-------------\n\n\n";
	
	cout <<"Enter price for 1 bag of Cement:\n";
	cin >>cemPr;
	cout <<"Enter price for 1 ton of Sand:\n";
	cin >>sndPr;
	cout <<"Enter price for 1 KG of Steel:\n";
	cin >>stlPr;
	cout <<"Enter price for 1 litre of Paint:\n";
	cin >>pntPr;
	cout <<"Enter price for 1 Piece of Brick:\n";
	cin >>brkPr;
	cout <<"Enter price for 1 Piece of Tile:\n";
	cin >>tlePr;
	
	cout <<"Enter area of house to be built is sqft:\n";
	cin >>sqftAr;
	
	buildingMaterialsEstimator(sqftAr, cemPr, sndPr, stlPr, pntPr, brkPr, tlePr);
	
}



void buildingMaterialsEstimator(float sqftArea, float cementPrice, float sandPrice, float steelPrice,
float paintPrice, float bricksPrice, float tilesPrice) {
		
	float totalCement = sqftArea*(400.0/1000);
	float totalSand = sqftArea*(81.6/1000);
	float totalSteel = sqftArea*(4000.0/1000);
	float totalPaint = sqftArea*(180.0/1000);
	float totalBricks = sqftArea*(8000.0/1000);
	float totalTiles = sqftArea*(325.0/1000);
	
	double totalEstimatedCost = (totalCement*cementPrice)+(totalSand*sandPrice)+(totalSteel*steelPrice)+
	(totalPaint*paintPrice)+(totalBricks*bricksPrice)+(totalTiles*tilesPrice);
	
	cout <<"\n\n__________________Material Estimation__________________\n\n";
	cout <<"Total Cement required:\t" <<totalCement <<" bags" <<endl;
	cout <<"Total Sand required:\t" <<totalSand <<" tons" <<endl;
	cout <<"Total Steel required:\t" <<totalSteel <<" KGs" <<endl;
	cout <<"Total Paint required:\t" <<totalCement <<" litres" <<endl;
	cout <<"Total Bricks required:\t" <<totalBricks <<" Pcs" <<endl;
	cout <<"Total Tiles required:\t" <<totalTiles <<" Pcs" <<endl;
	
	cout <<"\n\n_________Total Estimated Cost to Build a House_________\n\n";
	cout << fixed << setprecision(3);
	cout <<"The Total Estimated Cost is: " <<totalEstimatedCost/1000000 <<" Millions PKR" <<endl;
	
	cout <<"\n\n-------------------The End of Program-------------------\n\n";
	
}
