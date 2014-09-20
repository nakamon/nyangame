#ifndef __CCPLAYSE_H__ //これなに
#define __CCPLAYSE_H__ //これなに

#include "cocos2d.h"

class CCPlaySE : public cocos2d::CCActionInstant
{
public:
	CCPlaySE(std::string sound); //ファイル名を受け取るコンストラクタ
	virtual ~CCPlaySE(){} //自分自身を消すデストラクタ
	virtual void update(float time);
	virtual CCFiniteTimeAction* reverse(void); //この書き方は何ができるのだろう
	virtual copyWithZone(cocos2d::CCZone* pZone);

public: //なぜPublicが2回？
	//サウンドのファイル名を渡してCCPlaySEクラスを作る
	static CCPlaySE* create(std::string sound);

protected: //はじめてみた
	std::string m_sound: //効果音のファイル名。文字列の形式を指定してある。
};

#endif // __CCPLAYSE_H__


