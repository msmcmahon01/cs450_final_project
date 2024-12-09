Keytimes T38x, T38z;
void loadT38() {
	T38x.Init();
	T38x.AddTimeValue(t0, -8);
	T38x.AddTimeValue(t14, -8);
	T38x.AddTimeValue(t13, -8.75);
	T38x.AddTimeValue(t12, -9.5);
	T38x.AddTimeValue(t11, -10.25);
	T38x.AddTimeValue(t10, -11);
	T38x.AddTimeValue(t9, -11);
	T38x.AddTimeValue(t8, -8);
	T38x.AddTimeValue(t7, -4);
	T38x.AddTimeValue(t6, -4);
	T38x.AddTimeValue(t5, -4);
	T38x.AddTimeValue(t4, -12);
	T38x.AddTimeValue(t3, -12);
	T38x.AddTimeValue(t2, -8);
	T38x.AddTimeValue(t1, -8);

	T38z.Init();
	T38z.AddTimeValue(t0, 44);
	T38z.AddTimeValue(t14, 20);
	T38z.AddTimeValue(t13, 20.5);
	T38z.AddTimeValue(t12, 21);
	T38z.AddTimeValue(t11, 21.5);
	T38z.AddTimeValue(t10, 22);
	T38z.AddTimeValue(t9, 22);
	T38z.AddTimeValue(t8, 22);
	T38z.AddTimeValue(t7, 22);
	T38z.AddTimeValue(t6, 22);
	T38z.AddTimeValue(t5, 22);
	T38z.AddTimeValue(t4, 18);
	T38z.AddTimeValue(t3, 18);
	T38z.AddTimeValue(t2, 26);
	T38z.AddTimeValue(t1, 42);
}