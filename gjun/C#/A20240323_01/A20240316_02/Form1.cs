namespace A20240316_02
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            labelTitle.Text = "基 本 資 料";
            labelTitle.BorderStyle = BorderStyle.Fixed3D;
            labelTitle.BackColor = Color.LightGreen;
            labelTitle.ForeColor = Color.IndianRed;
            labelTitle.Font = new Font("微軟正黑體", 16, FontStyle.Bold | FontStyle.Underline);
            labelOutput.Text = "";

            //下方產生月下拉清單項目
            for (int iMonth = 1; iMonth <= 12; iMonth++)
            { comboBoxBDM.Items.Add(iMonth); }
            comboBoxBDM.Text = DateTime.Today.Month.ToString();

            //下方產生年下拉清單項目
            int iYear = DateTime.Today.Year;
            while (iYear >= DateTime.Today.Year - 130)
            { comboBoxBDY.Items.Add(iYear--); }
            comboBoxBDY.Text = (DateTime.Today.Year - 18).ToString();

            vSetDays();
        }

        private void buttonOutput_Click(object sender, EventArgs e)
        {
            string strOutputData = "";

            if (textBoxFullName.Text != "")
            { strOutputData = "姓名：" + textBoxFullName.Text + "\n"; }

            if (radioButtonGenderMale.Checked)
            { strOutputData += "性別：" + radioButtonGenderMale.Text + "\n"; }
            else
            { strOutputData += "性別：" + radioButtonGenderFemale.Text + "\n"; }

            if (radioButtonBloodTypeA.Checked)
            { strOutputData += "血型：" + radioButtonBloodTypeA.Text + "\n"; }
            else if (radioButtonBloodTypeB.Checked)
            { strOutputData += "血型：" + radioButtonBloodTypeB.Text + "\n"; }
            else if (radioButtonBloodTypeO.Checked)
            { strOutputData += "血型：" + radioButtonBloodTypeO.Text + "\n"; }
            else
            { strOutputData += "血型：" + radioButtonBloodTypeAB.Text + "\n"; }

            if (checkBoxInterest1.Checked || checkBoxInterest2.Checked ||
                checkBoxInterest3.Checked || checkBoxInterest4.Checked)
            {
                strOutputData += "興趣：";
                if (checkBoxInterest1.Checked) { strOutputData += checkBoxInterest1.Text + " "; }
                if (checkBoxInterest2.Checked) { strOutputData += checkBoxInterest2.Text + " "; }
                if (checkBoxInterest3.Checked) { strOutputData += checkBoxInterest3.Text + " "; }
                if (checkBoxInterest4.Checked) { strOutputData += checkBoxInterest4.Text + " "; }
                strOutputData += "\n";
            }

            strOutputData += "出生日期：" + comboBoxBDY.Text + " / " + comboBoxBDM.Text +
                " / " + comboBoxBDD.Text + "\n";

            labelOutput.Text = strOutputData;
        }

        private void comboBoxBDM_SelectedIndexChanged(object sender, EventArgs e)
        { vSetDays(); }

        private void comboBoxBDY_SelectedIndexChanged(object sender, EventArgs e)
        { vSetDays(); }

        private void vSetDays()
        {
            //下方產生日下拉清單項目
            comboBoxBDD.Items.Clear();
            int iDays = 0;  //iDays : 儲存指定月份的天數
            int icbxMthItem = int.Parse(comboBoxBDM.Text);  //icbxMthItem : 儲存月份清單目前選擇的月份值
            if (icbxMthItem == 2)
            {
                int icbxYearItem = int.Parse(comboBoxBDY.Text);  //icbxYearItem : 儲存年份清單目前選擇的年份值
                if (icbxYearItem % 400 == 0 || icbxYearItem % 4 == 0 && icbxYearItem % 100 != 0)
                { iDays = 29; }
                else
                { iDays = 28; }
            }
            else if (icbxMthItem == 4 || icbxMthItem == 6 || icbxMthItem == 9 || icbxMthItem == 11)
            { iDays = 30; }
            else
            { iDays = 31; }

            int iDay = 1;
            do
            {
                comboBoxBDD.Items.Add(iDay++);
            } while (iDay <= iDays);
            comboBoxBDD.Text = DateTime.Today.Day.ToString();
        }
    }
}
