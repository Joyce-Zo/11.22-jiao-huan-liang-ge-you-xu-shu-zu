#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void merge(int* nums1, int nums1Size,int m, int* nums2, int nums2Size, int n)
//{
//    int n1 = 0, n2 = 0;
//    int n3 = 0;
//    int nums3[111] = { 0 };
//    while (n1 < m + n && n2 < n)
//    {
//        if (nums1[n1] < nums2[n2])
//        {
//            nums3[n3] = nums1[n1];
//            n1++;
//        }
//        else
//        {
//            nums3[n3] = nums2[n2];
//            n2++;
//        }
//        n3++;
//    }
//    nums1 = nums3;
//    return nums1;
//}

void merge(int* nums1, int nums1Size,
    int m, int* nums2, int nums2Size, int n)
{
    int num = 0;
    while (m > 0 && n > 0)
    {
        num = m + n - 1;
        if (nums1[m - 1] < nums2[n - 1])
        {
            nums1[num] = nums2[n - 1];
            n--;
        }
        else
        {
            nums1[num] = nums1[m - 1];
            m--;
        }
    }
    while (n > 0)
    {
        num = m + n - 1;
        nums1[num] = nums2[n - 1];
        n--;
    }
}


int main()
{
    int nums1[6] = { 1,2,3,0,0,0 };
    int nums2[3] = { 2,5,6 };
    merge(nums1, 6, 3, nums2, 3, 3);

    return 0;
}