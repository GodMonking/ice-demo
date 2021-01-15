#include <IceBox/IceBox.h>
 
class queryPersonServiceI : public IceBox::Service 
{
public:
  
    virtual void start(const std::string&, const std::shared_ptr<Ice::Communicator>&, const Ice::StringSeq&) override;
    virtual void stop() override;
 
private:
  
    std::shared_ptr<Ice::ObjectAdapter> _adapter;
};
