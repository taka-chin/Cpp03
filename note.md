# 継承
クラスのメンバを引き継いで新しいクラスを作成すること

```
class Base{
	public:
		int foo;
		int bar;
		int FooBar{
			return foo + bar;
		}
}

class Derived : public Base
{
	public:
		int FooBarEx(int ex)
		{
			return ex(foo + bar);
		}
}
```

DerivedクラスではBaseクラスの全メンバを使用できます
継承を行った場合もメンバを持つことができるため、Baseクラスに無い関数を実装することができます

# 基底クラス派生クラス
継承のもとになったクラスのことを基底クラス、継承して作ったクラスを派生クラスという

# アクセス修飾子
|  アクセス修飾子 | 基底クラス | 派生クラス |
|:----------:|:-----------:|:-------:|
| public     | 〇          | 〇      |
| protected  | 〇          | 〇      |
| private    | 〇          | ×       |
