#include "download_item.hpp"

namespace dm{

namespace item{

download_item::download_item(const QString &status,
                             const QUrl &url) :
    status_{status},
    url_{url}
{
    name_ = url_.fileName();
}

}

}
