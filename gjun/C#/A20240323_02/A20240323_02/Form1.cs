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
            //Exam : ��ƩM�d��
            int iNumber1=13, iNumber2=59;
            vSum(iNumber1, iNumber2);
            //Exam : ��ƭ��n�d��
            label1.Text += "���ơG" + iNumber1 + "\n";
            label1.Text += "�Q���ơG" + iNumber2 + "\n";
            label1.Text += "��Ƭۭ��� " + iProduct(iNumber1, iNumber2) + "\n";
        }

        private void vTest1()
        { label1.Text = "�I�svTest1��k�A�L�޼�!!!\n\n"; }

        private void vSum(int iValue1, int iValue2)
        {
            label1.Text += "��1�G" + iValue1 + "\n";
            label1.Text += "��2�G" + iValue2 + "\n";
            label1.Text += "��ƩM�� " + (iValue1+iValue2) + "\n\n";
        }

        private int iProduct(int iValue1, int iValue2)
        { return (iValue1 * iValue2); }

    }
}
