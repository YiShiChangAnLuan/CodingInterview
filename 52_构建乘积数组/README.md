# Link
> 牛客OJ: [构建乘积数组](https://www.nowcoder.com/practice/94a4d381a68b47b7a8bed86f2975db46?tpId=13&tqId=11204&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)  

# 题目
#### 题目描述
> 给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。

#### 输入描述
> 1, 2, 3, 4, 5

#### 输出描述
> 120, 60, 40, 30, 24
 
# 题解  
#### 
```
vector<int> res(A.size());
/* res[i] = A[0] * A[1] * ... * A[i - 1] */
for (int i = 0, tmp = 1; i < A.size(); ++i) {
  res[i] = tmp;
  tmp *= A[i];
}
/* res[i] = A[i + 1] * ... * A[n - 1] */
for (int i = A.size() - 1, tmp = 1; i >= 0; --i) {
  res[i] *= tmp;
  tmp *= A[i];
}
return res;
```