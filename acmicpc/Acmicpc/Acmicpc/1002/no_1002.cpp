//
//  no_1002.cpp
//  Acmicpc
//
//  Created by heogj123 on 2022/06/30.
//

#include "no_1002.hpp"
#include <stdio.h>
#include <math.h>

void no_1002::func() {
  // insert code here...
  
  int n;
  scanf("%d", &n);
  
  for(int i=0; i<n; i++) {
    int x1,y1,r1;
    int x2,y2,r2;
    
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    
    if ((x1 == x2) && (y1 == y2) && (r1 == r2)) {
      // 무수한 점에서 만나는 경우.
      printf("%d\n", -1);
    } else {
      int distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
      int r1r2 = (r1 + r2) * (r1 + r2);
      
      if (r1r2 == distance) {
        // 두원이 외접으로 만남
        printf("%d\n", 1);
      }
      else if (r1r2 > distance) {
        int offset = r2 > r1 ? r2 - r1 : r1 - r2;
        offset = offset * offset;
        
        if (offset == distance) {
          // 두원이 내접할 경우가 있고.
          printf("%d\n", 1);
        } else if (offset > distance) {
          // 두원이 만나지 않은 경우가 있음.
          printf("%d\n", 0);
        } else if (offset < distance) {
          // 그외의 경우에는 두개의 점에서 만남.
          printf("%d\n", 2);
        }
      }
      else if (r1r2 < distance) {
        // 두원이 만나지 않음
        printf("%d\n", 0);
      }
    }
  }
}
