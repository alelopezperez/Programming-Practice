fn main(){
     
}

fn num_islands(grid: Vec<Vec<char>>) -> i32 {
        let mut visited:HashSet<(usize,usize)> = HashSet::new();
        let mut ans = 0;
        let row = grid.len();
        let col = grid[0].len();
        for i in (0..grid.len()){
            for j in (0..grid[i].len()){
                if grid[i][j]=='1' && !visited.contains(&(i ,j)) { 
                    println!("{} {}",i,j);
                    Self::helper(&grid,i,j , col , row , &mut visited);
                    ans+=1;
                }
            }
        }

        ans
}

fn helper(grid: &Vec<Vec<char>>, i: usize, j:usize, col:usize, row:usize, visited: &mut HashSet<(usize,usize)>){
        
        if i >= 0 && i < row && j >= 0 && j < col{ 
            if(grid[i][j]=='1' && !visited.contains(&(i,j))){
                visited.insert((i,j));
                Self::helper(grid,i+1,j,col,row,visited);
                Self::helper(grid,i-1,j,col,row,visited);
                Self::helper(grid,i,j+1,col,row,visited);
                Self::helper(grid,i,j-1,col,row,visited);

            }
        }

}

    pub fn num_islands(mut grid: Vec<Vec<char>>) -> i32 {
        let mut ans = 0;
        for i in 0..grid.len(){
            for j in 0..grid[0].len() {
                if grid[i][j]=='1' { 
                    Self::helper(&mut grid,i,j);
                    ans+=1;
                }
            }
        }

        ans
    }

    pub fn helper(grid: &mut Vec<Vec<char>>, i: usize, j:usize){
        
        if i >= 0 && i < grid.len() && j >= 0 && j < grid[0].len() { 
            if grid[i][j]=='1' {
                grid[i][j]='#';
                Self::helper(grid,i+1,j);
                Self::helper(grid,i-1,j);
                Self::helper(grid,i,j+1);
                Self::helper(grid,i,j-1);

            }
        }

    }
