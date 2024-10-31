namespace A20240316_01
{
    partial class FormMainForm
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label_Test = new Label();
            label2 = new Label();
            SuspendLayout();
            // 
            // label_Test
            // 
            label_Test.BackColor = Color.FromArgb(120, 241, 208);
            label_Test.BorderStyle = BorderStyle.FixedSingle;
            label_Test.Font = new Font("標楷體", 12F, FontStyle.Italic, GraphicsUnit.Point, 136);
            label_Test.ForeColor = Color.FromArgb(165, 75, 224);
            label_Test.Location = new Point(30, 20);
            label_Test.Name = "label_Test";
            label_Test.Size = new Size(160, 50);
            label_Test.TabIndex = 0;
            label_Test.Text = "我的第一個物件";
            label_Test.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(53, 109);
            label2.Name = "label2";
            label2.Size = new Size(42, 15);
            label2.TabIndex = 1;
            label2.Text = "label2";
            // 
            // FormMainForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(324, 169);
            ControlBox = false;
            Controls.Add(label2);
            Controls.Add(label_Test);
            MaximizeBox = false;
            MinimizeBox = false;
            Name = "FormMainForm";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label_Test;
        private Label label2;
    }
}
