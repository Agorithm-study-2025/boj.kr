#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 내림차순 정렬
bool compareGenres(const pair<string, int> &a, const pair<string, int> &b){
    return a.second > b.second;
}

// 같은 장르에 같은 시간일 경우 
bool compareSong(const pair<int, int> &a , const pair<int, int> &b){
    if(a.second == b.second){
        // 오름차순
        return a.first < b.first;
    }
    // 내림차순
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> play_dict;
    unordered_map<string, vector<pair<int, int>>> genres_dict; 
    
    // 장르별 총 재생 횟수와 각 곡의 재생 횟수 저장
    for(int i=0; i<plays.size(); i++){
        genres_dict[genres[i]].push_back({i, plays[i]}); // classic - {0, 500}
        play_dict[genres[i]] += plays[i]; // classic - 1450, pop - 3100
    }
    
    // 총 재생 횟수가 많은 장르순으로 정렬
    
    // 기존에 더했던 값을 복사
    vector<pair<string, int>> sorted_genres(play_dict.begin(), play_dict.end());
    
    // 복사한 값을 내림차순으로 정렬
    sort(sorted_genres.begin(), sorted_genres.end(), compareGenres);
    
    for(auto &ge: sorted_genres){
        // songs = genres_dict["pop"] = { {1, 600}, {4, 2500} }
        auto &songs = genres_dict[ge.first]; // 딕셔너리 전체를 입력
        
        // 같은 key를 가질경우 고유번호가 낮을 경우 앞으로
        sort(songs.begin(), songs.end(), compareSong); 
        
        // 2개 이하만 뽑아야하기 때문에 min 사용
        for(int i = 0; i < min(2, (int)songs.size()); i++){
            answer.push_back(songs[i].first);
        }
    }
    
    
    
    
    
    
    return answer;
}