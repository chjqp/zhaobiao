#include "global.h"

std::function<void(QWidget*)> repolish =[](QWidget *w){
    w->style()->unpolish(w);
    w->style()->polish(w);
};

std::function<QString(QString)> xorString = [](QString input){
    QString result = input; // 复制原始字符串，以便进行修改
    int length = input.length(); // 获取字符串的长度
    ushort xor_code = length % 255;
    for (int i = 0; i < length; ++i) {
        // 对每个字符进行异或操作
        // 注意：这里假设字符都是ASCII，因此直接转换为QChar
        result[i] = QChar(static_cast<ushort>(input[i].unicode() ^ xor_code));
    }
    return result;
};

QString gate_url_prefix = "";

std::vector<QString> strs = {
    "项目经理", "业主代表", "技术组专家", "商务组专家"
};

std::vector<QString> heads = {
    ":/res/head_1.jpg", ":/res/head_2.jpg", ":/res/head_3.jpg",
    ":/res/head_4.jpg", ":/res/head_5.jpg"
};

std::vector<QString> names = {
    "陈志伟", "黄怡芬", "汪嘉红", "张志豪", "万惠散", "向莉婷", "杨俊宏", "韦可欣"
};

