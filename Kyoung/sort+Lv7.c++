#include <string>
using namespace std;
// 오프셋 만들기

int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

// 특정 좌표 생성
bool isVisited[11][11][4];

// 범위 넘었는지 확인
bool isNotVaild(int x, int y){
    return x<0 || y<0 || x>10 || y>10;
}

// 이동전, 후 체크를 위해 오프셋
int opposite(int dir){
    return (dir +2) % 4;
}

// 오프셋 사용위해 범위별 정수
int todir(char dir){
    // 실제로 작성할 때는 x, y 위치 바꿔서 해줘야함
    int ret;
    if(dir == 'U'){
        ret = 0;
    }
    else if(dir == 'R'){
        ret = 1;
    }
    else if(dir == 'D'){
        ret = 2;
    }
    else if(dir == 'L'){
        ret = 3;
    }
    return ret;
}


int solution(string dirs) {
    int answer = 0;
    int x = 5;
    int y = 5;
    
    for(auto c: dirs){
        
        //정수형으로 변환
        int dir = todir(c); // 문자형
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        // 범위를 넘어설경우
        if(isNotVaild(nx, ny)){
            continue;
        }
        
        // 범위를 안 넘을경우
        if(isVisited[y][x][dir] == false){
            isVisited[y][x][dir] = true; // 이동 전 장소 체크
            isVisited[ny][nx][opposite(dir)] = true; // 이동한 곳 체크
            answer++;
        }
        // 이동한 것도 표시
        x = nx;
        y = ny;
        
    }
    
    return answer;
}