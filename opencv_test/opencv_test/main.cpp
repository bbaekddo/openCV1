//
//  main.cpp
//  opencv_test
//
//  Created by 백도현 on 2020/08/27.
//  Copyright © 2020 백도현. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    
    Mat pic = imread("/Users/dohyeonsmac/Desktop/example1.JPG");
    if (pic.empty()){
        cerr << "read fail!" << endl;
        exit(-1);
    }
    
    imshow("Pic", pic);
    waitKey(0);
    
    return 0;
}
