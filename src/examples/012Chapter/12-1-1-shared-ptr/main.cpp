#include "shared_pointer.h"

using std::cout; using std::shared_ptr; using std::make_shared;

int main()
{
    shared_ptr<int> num = get_shared_pointer();
    cout<<"Create "<<num.use_count()<<"\n";

    use_shared_pointer(num);
    cout<<"count exit function "<<num.use_count()<<"\n";

    use_shared_pointer_ref(num);
    cout<<"count exit ref function "<<num.use_count()<<"\n";

    auto n(num);
    cout<<"auto "<<num.use_count()<<"\n";

    n = nullptr;
    cout<<"auto nulled "<<num.use_count();

    return 0;
}
