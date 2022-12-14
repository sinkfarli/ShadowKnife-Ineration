# 无刷直流电动机（BLDC）
Author & Note ：影风远sinkfarli

Create Date ：2022.5.30



## Content
- [Content](#content)
- [无刷直流电动机（BLDC）驱动方式](#无刷直流电动机bldc驱动方式)

## 无刷直流电动机（BLDC）驱动方式
无刷直流电动机（BLDC）采用方波电流驱动模式。

对于常见的三相桥式6状态工作方式，在360°（电气角）的一个电气周期时间内，可均分为6个区间，或者说，三相绕组导通状态分为6个状态。

三相绕组端A、B、C连接到由6个大功率开关器件组成的三相桥式逆变器3个桥臂上。

绕组为星型接法时，这6个状态中任一个状态都有两个绕组串联导电，一相为正向导通，一相为反向导通，而另一个绕组端对应的功率开关器件桥臂上下两器件均不导通。这样，观察任意一相绕组，它在一个电气周期内，有120°是正向导通，然后60°为不导通，再有120°为反向导通，最后60°是不导通的。这样，观察任意一相绕组，它在一个电气周期内，有120°是正向导通，然后60°为不导通，再有120°为反向导通，最后60°是不导通的。

在上述理想情况下，方波驱动永磁无刷直流电动机有线性的转矩-电流特性，理论上转子在不同转角时都没有转矩波动产生。但是，在实际的永磁无刷直流电动机，由于每相反电动势梯形波平顶部分的宽度很难达到120°，平顶部分也不可能做到绝对的平坦无纹波，加上齿槽效应的存在和换相过渡过程电感作用等原因，电流波形也与理想方波有较大差距，转矩波动实际上必然存在。
