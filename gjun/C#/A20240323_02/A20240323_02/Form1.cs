namespace A20240323_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            vTest1();
            //Exam : ㄢ计㎝絛ㄒ
            int iNumber1=13, iNumber2=59;
            vSum(iNumber1, iNumber2);
            //Exam : ㄢ计縩絛ㄒ
            label1.Text += "计" + iNumber1 + "\n";
            label1.Text += "砆计" + iNumber2 + "\n";
            label1.Text += "ㄢ计 " + iProduct(iNumber1, iNumber2) + "\n";
        }

        private void vTest1()
        { label1.Text = "㊣vTest1よ猭礚ま计!!!\n\n"; }

        private void vSum(int iValue1, int iValue2)
        {
            label1.Text += "1" + iValue1 + "\n";
            label1.Text += "2" + iValue2 + "\n";
            label1.Text += "ㄢ计㎝ " + (iValue1+iValue2) + "\n\n";
        }

        private int iProduct(int iValue1, int iValue2)
        { return (iValue1 * iValue2); }

    }
}
