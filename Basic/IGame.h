/**
 * 게임 객체
 * 게임 실행 시 생성
 */

class IGame
{
public:
    IGame() {}
    virtual ~IGame() {}

    virtual void Shutdown() {}
    
private:
    // 복사에 의한 생성을 금지한다.
    IGame(const IGame &rhs) = delete;
    IGame &operator=(const IGame &rhs) = delete;

public:
    // Application Component에서 호출한다.
    virtual void InitiatingGame() {}
    virtual bool UpdateFrame(){}
};