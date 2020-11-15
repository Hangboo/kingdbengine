#include <cctype>
#include <string>
#include <vector>
#include <memory>

#include "IGame.h"

enum class EComponentType
{
    Application,
};

enum class EResolutionType
{
    Default = 0,
};

class ApplicationComponent 
{
public:
    ApplicationComponent();
    virtual ~ApplicationComponent() {}

    virtual void ShutdonwComponent();

private:
    // 복사에 의한 생성을 금지한다.
    ApplicationComponent(const ApplicationComponent &Rhs) = delete;
    ApplicationComponent &operator=(const ApplicationComponent Rhs) = delete;

public:
    virtual EComponentType GetComponentType() { return EComponentType::Application; }

private:
    // TODO: Application 정의에 필요한 Data들 정의
    std::string AppId;
    std::shared_ptr<IGame> Game;

    EResolutionType ResoltionType;
};