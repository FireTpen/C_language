/*1.加入有如下定义：
    int grid[30][100];
	a.用1种方法表示grid[22][56]的地址。
	b.用2中方法表示grid[22][0]的地址。
	c.用3种方法表示grid[0][0]的地址。
*/
int grid[30][100];

a.  &grid[22][56];

b.  &grid[22][0] = grid[22];

c.  grid = (int*)grid = grid[0] = &grid[0][0]

//数组 grid 和 （int*） grid 是一样的。
